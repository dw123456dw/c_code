#include <stdio.h>
#include <pthread.h>

void *tfn(void *arg)
{
	printf("线程%d,%lu\n",getpid(),pthread_self());	
	return NULL;
}

int main()
{
	pthread_t tid;
	printf("%d,%lu\n",getpid(),pthread_self());	

	int ret=pthread_create(&tid,NULL,tfn,NULL);
	if(ret!=0)
	{
		perror("pthread_create");
	}
	sleep(1);
	return 0;
}


