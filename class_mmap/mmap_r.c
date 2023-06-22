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
	fd = open("map_section",O_RDWR); //创建的文件大小0
	if(fd==-1)
	{
		perror("open");
		exit(1);
	}

	p=mmap(NULL,sizeof(stu),PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);  
	if(p==MAP_FAILED)
	{
		perror("mmap");
		exit(1);
	}
	close(fd);
	while(1)
	{
		printf("id=%d,name=%s,age=%d\n",p->id,p->name,p->age);
		sleep(1);
	}
	return 0;
}
