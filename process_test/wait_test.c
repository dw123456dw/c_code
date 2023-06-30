#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>


int main()
{
	pid_t pid,wpid;
	int status;

	pid=fork();

	if(pid==0)
	{
		printf("---child,my id is %d,going to die 10s\n",getpid());
		sleep(1);
		printf("-------------child die------------\n");
		return 70;
	}
	else if(pid > 0)
	{
		wpid=wait(&status);
		if(wpid==-1)
		{
			perror("wait error\n");
			exit(1);
		}
		
		if(WIFEXITED(status))
		{
			printf("child return %d\n",WEXITSTATUS(status));
		}
		printf("--------parent wait finish: %d\n",wpid);
	}
	else
	{
		perror("fork error");
		exit(1);
	}

	return 0;
}
