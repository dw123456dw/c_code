
//要求：父子进程一个执行ls一个执行wc -l达到ls | wc -l的效果
#include <stdio.h>
#include <unistd.h>

int main()
{
	int fd[2];
	pid_t pid;
	int ret;
    ret = pipe(fd);
	if(ret==-1)
	{
		perror("pipe");
		exit(1);
	}
	//创建进程
	pid=fork();
	if(pid==0)     //子线程  wc -l
	{
		//2指向1
		close(fd[0]);
		dup2(fd[1],STDOUT_FILENO);
		execlp("ls","ls",NULL);
		perror("parent");
	}
	else if(pid>0)   //主线程 ls
	{
		close(fd[1]);
		dup2(fd[0],STDIN_FILENO);
		execlp("wc","wc","-l",NULL);
		perror("child");	
	}
	else if(pid==-1)
	{
		perror("fork error");
		exit(1);
	}
	
	return 0;
}



