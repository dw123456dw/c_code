#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc,char* argv[])
{
	struct stat sbuf;
	int ret=stat(argv[1],&sbuf);
	if(ret==-1)
	{
		perror("stat error\n");
		exit(1);
	}
	if(S_ISREG(sbuf.st_mode))
	{
		printf("是一个普通文件\n");
	}
	else
	{
		printf("不是一个普通文件\n");
	}
    return 0;
}
