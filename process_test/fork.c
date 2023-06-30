#include <stdio.h>
#include <unistd.h>

int main()
{
	printf("before fork 1\n");
	printf("before fork 2\n");
	printf("before fork 3\n");
	printf("before fork 4\n");

	pid_t pid=fork();
	if(pid==-1)
	{
		perror("fork error\n");
		exit(1);
	}
	else if(pid==0)
	{
		printf("child process:i am %d,parent is:%d\n",getpid(),getppid());
	}
	else if(pid>0)
	{
		printf("parent process:my son is %d,parent is:%d\n",pid,getppid());
	}
	
	
	printf("after fork==========================");
	return 0;
}


