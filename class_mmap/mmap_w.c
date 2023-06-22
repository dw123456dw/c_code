#include <stdio.h>
#include <unistd.h>
#include <sys/mman.h>
#include <string.h>
#include <fcntl.h>

struct student
{
	int id;
	char name[256];	
	int age;
};

int main()
{
	struct student stu;
	struct student *p;
	int fd;	
	fd = open("map_section",O_RDWR|O_CREAT|O_TRUNC,0664);     //创建的文件大小0
	if(fd==-1)
	{
		perror("open");
		exit(1);
	}

	ftruncate(fd,sizeof(stu));    //改变文件大小为建立映射做准备

	p=mmap(NULL,sizeof(stu),PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);  
	if(p==MAP_FAILED)
	{
		perror("mmap");
		exit(1);
	}
	close(fd);
	while(1)
	{	
		memcpy(p,&stu,sizeof(stu));
		stu.id++;
		sleep(1);
	}
	return 0;
}
