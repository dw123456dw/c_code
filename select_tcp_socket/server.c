#include "wrap.h"

#define SERV_PORT 8848

int main()
{
	int lfd,cfd;
	int ret,i,n,j;
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

	fd_set rset,allset;         //定义读集合，备份集合
	FD_ZERO(&allset);
	FD_SET(lfd,&allset);        //将待监听fd添加到集合
	int maxfd=lfd;

	while(1)
	{	
		rset = allset;          //传入参数
		ret = select(maxfd+1,&rset,NULL,NULL,NULL);
		if(ret < 0)
			perr_exit("select error");
		if(FD_ISSET(lfd,&rset))      //传出参数，如果有lfd表明需要连接
		{
			clt_addr_len = sizeof(clt_addr);
			cfd = Accept(lfd,(struct sockaddr *)&clt_addr,&clt_addr_len);
			FD_SET(cfd,&allset);       //把连接上的cfd加入监听集合

			if(maxfd < cfd)
				maxfd = cfd;
			if(ret == 1)              //声明select只返回lfd无客户端消息，直接返回
				continue;
		}
		for(i = lfd+1;i <= maxfd;i++)     //有客户端写数据，在监听集合里寻找谁要写
		{
	   		if(FD_ISSET(i,&rset)) 
			{
				n = read(i,buf,sizeof(buf));
				if(n == 0)                  //客户端关闭
				{
					close(i);
					FD_CLR(i,&allset);      //关闭连接，把监听集合里的cfd拿走
				}
				else if(n == -1)
				{
					perr_exit("read error");
				}
				for(j = 0;j< n;j++)
				{
					buf[j]=toupper(buf[j]);
				}
				write(i,buf,n);
				write(STDOUT_FILENO,buf,n);
			}
		}			
	}
	return 0;
}





