#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()               //fork三个子进程调用外部三个程序，并用waitpid回收
{
		pid_t pid,tempid;	
		int i;
		int arr[3];	

		for(i=0;i<3;i++)
		{
				pid=fork();
				if(pid==0)     //子进程退出
				{
						break;
				}
				else if(pid>0)  //父进程
				{
						arr[i]=pid;
						printf("my son is %d\n",pid);
				}
				else
				{
						perror("fork error");
						exit(1);
				}
		}			
		switch(i)
		{
				case 0:
						{
								int ret;
								ret=execlp("ps","ps",NULL);
								if(ret==-1)
								{
										perror("ps error");
										exit(1);
								}
								break;
						}
				case 1:
						{
								int ret;
								ret=execl("./hello","hello",NULL);
								if(ret==-1)
								{
										perror("hello error");
										exit(1);
								}
								break;
						}
				case 2:  
						{
								int ret;
								ret=execl("./error","error",NULL);
								if(ret==-1)
								{
										perror("error");
										exit(1);
								}
								break;
						}
				case 3:       //父进程回收子进程
						{
								int pos=0;
								pid_t tempid;
								while((tempid = waitpid(-1,NULL,WNOHANG)) !=-1)
								{
										if(tempid==0)
										{
												sleep(1);
												continue;
										}
										else if(tempid>0)
										{
												printf("wait %d\n",tempid);
										}
								}
								break;
						} 
		}
		return 0;
}	
