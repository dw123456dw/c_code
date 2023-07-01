#include <stdio.h>
#include <pthread.h>

void* tfn(void* arg)
{
	int i=*((int *)arg) ;
	sleep(i);	
	printf("i'am %d,pid=%d,tid=%lu\n",i+1,getpid(),pthread_self());
	return NULL;
}
int main()
{
	int i;
	int ret;
	pthread_t tid;

	for(i=0;i<5;i++)
	{
		ret=pthread_create(&tid,NULL,tfn,(void *)&i);
		if(ret!=0)
		{
			perror("pthrad_create");
		}
	}

	sleep(i);
	return 0;
}
