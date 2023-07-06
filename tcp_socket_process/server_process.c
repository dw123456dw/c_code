#include "wrap.h"

#define SERV_PORT 8848

void catch_child(int signum)
{
	while(waitpid(0,NULL,WNOHANG) > 0);    //回收子进程
	return ;
}
int main()
{
	int lfd,cfd;
	pid_t pid;
	int ret,i;

	char buf[BUFSIZ];

	struct sockaddr_in serv_addr,clt_addr;
	socklen_t clt_addr_len;

	bzero(&serv_addr,sizeof(serv_addr));
	
	serv_addr.sin_family = AF_INET;               //老三样
	serv_addr.sin_port = htons(SERV_PORT);
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);

	lfd = Socket(AF_INET,SOCK_STREAM,0);        //创建套接字
	//设置端口复用
	int opt = 1;
	setsockopt(lfd,SOL_SOCKET,SO_REUSEPORT,(void *)&opt,sizeof(opt));

	Bind(lfd,(struct sockaddr *)&serv_addr,sizeof(serv_addr));
	Listen(lfd,128);
	printf("等待连接\n");
	clt_addr_len = sizeof(clt_addr);	 //客户端套接字大小
	
	while(1)
	{
		cfd = Accept(lfd,(struct sockaddr *)&clt_addr,&clt_addr_len);
		pid = fork();
		
		if(pid==0)                        //子进程关闭用于连接的lfd
		{
			close(lfd);
			break;
		}
		else if(pid > 0)                   //父进程关闭属于他的cfd
		{
			struct sigaction act;
			act.sa_handler = catch_child;
			sigemptyset(&act.sa_mask);
			act.sa_flags = 0;	
		    ret = sigaction(SIGCHLD,&act,NULL);        //注册信号
			if(ret != 0)
				perr_exit("sigaction error");
			close(cfd);
			continue;
		}
		else
		{
			perr_exit("fork error");
		}
	}
	if(pid == 0)
	{
		while(1)
		{
			ret = Read(cfd,buf,sizeof(buf));
			if(ret == 0)
			{
				close(cfd);
				exit(1);
			}		
			for(i=0;i<ret;i++)
			{
				buf[i]=toupper(buf[i]);
			}
			write(cfd,buf,ret);
			write(STDOUT_FILENO,buf,ret);
		}		
	}
	return 0;
}





