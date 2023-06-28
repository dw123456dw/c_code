#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
#include <stdlib.h>
void catch_child(int signo)      //有子进程终止，发送信号，该函数由内核调用
{
	pid_t wpid;
	int status;
	//printf("-------catch child %d\n",wait(NULL));	
	while((wpid=waitpid(-1,&status,0))!=-1)     //循环回收防止僵尸进程出现
	{
		if(WIFEXITED(status))
			printf("-------catch child %d,ret=%d\n",wpid,WEXITSTATUS(status));	
	}	
	return ;
}

int main()
{
	pid_t pid;
	int i;
	//阻塞
	sigset_t set;
	sigemptyset(&set);
	sigaddset(&set,SIGCHLD);
	
	sigprocmask(SIG_BLOCK,&set,NULL);

	for(i=0;i<5;i++)
	{
		if((pid=fork())==0)
		{
			break;
		}
	}

	if(i==5)
	{
		struct sigaction act;
		act.sa_handler = catch_child;
		sigemptyset(&act.sa_mask);
		act.sa_flags = 0;	
		
		sigaction(SIGCHLD,&act,NULL);
		//解除阻塞
		sigprocmask(SIG_UNBLOCK,&set,NULL);

		printf("i'am parent,pid=%d\n",getpid());
		while(1);            //模拟后序逻辑
	}
	else
	{
		printf("i'am child pid=%d\n",getpid());
	}
	return 0;
}
