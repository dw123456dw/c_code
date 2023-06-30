#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main()
{
	pid_t pid;
	int ret,fd;	
	pid=fork();		
	if(pid>0)
	{
		return 0;
	}	
	
	pid = setsid();
	ret=chdir("home/dwcmper");
	umask(0022);
	close(STDIN_FILENO);	
	fd=open("dev/null",O_RDWR);
	dup2(fd,STDOUT_FILENO);	
	dup2(fd,STDERR_FILENO);
	while(1);
	return 0;
}
