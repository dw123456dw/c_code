#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int ret;
	int fd[2];
	char *str = "hello pipe\n";
	pid_t pid;
	char buf[1024];
	ret=pipe(fd);
	if(ret==-1)
	{
		perror("pipe error\n");
		exit(1);
	}
	pid=fork();
	if(pid>0)      //父进程写
	{
		close(fd[0]);    //关闭读端
		write(fd[1],str,strlen(str));
		sleep(1);
		close(fd[1]);   //写完关闭写端
	}
	else if(pid==0)     //子进程读
	{
		close(fd[1]);    //关闭写端
		ret=read(fd[0],buf,sizeof(buf));	
		write(STDOUT_FILENO,buf,ret);
		close(fd[0]);   //读完关闭读端
	}
	return 0;
}
