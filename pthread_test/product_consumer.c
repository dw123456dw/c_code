#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

struct msg    
{
		int num;
		struct msg* next;
};
struct msg *head;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;      //初始化互斥量
pthread_cond_t has_data = PTHREAD_COND_INITIALIZER;     //初始化条件变量

void *produser(void *arg)
{
	int i;
	for(i=0;i<1000;i++)
	{
		struct msg *mp;                        //模拟生产数据
		mp=malloc(sizeof(struct msg));	
		mp->num=rand() % 100 + 1;
		printf("生产者产生了一个: %d\n",mp->num);
		pthread_mutex_lock(&mutex);		
		mp->next=head;                         //写公共区域
		head=mp;	
		pthread_mutex_unlock(&mutex);

		pthread_cond_signal(&has_data);        //唤醒阻塞的消费者
		sleep(rand()%3);
	}
	return NULL;
}

void *consumer(void *arg)
{
	int i;
	for(i=0;i<1000;i++)
	{
		struct msg* mp;
		pthread_mutex_lock(&mutex);		

		while(head == NULL)
		{
				pthread_cond_wait(&has_data,&mutex);     //阻塞等待条件变量
		}	 										//该函数返回时会重新加锁mutex

		mp=head;
		head=mp->next;
		pthread_mutex_unlock(&mutex);
		printf("id:%lu号消费者消费了一个:%d\n",pthread_self(),mp->num);
		free(mp);
		sleep(rand()%3);
	}
	return NULL;
}

int main()
{
		srand(time(NULL));
		pthread_t pid,cid;

		int ret = pthread_create(&pid,NULL,produser,NULL);    //创建生产者
		if(ret!=0)
		{
				fprintf(stderr,"produser create%s",strerror(ret));
		}
		ret = pthread_create(&cid,NULL,consumer,NULL);    //创建消费者
		if(ret!=0)
		{	
				fprintf(stderr,"consumer create%s",strerror(ret));
		}
		ret = pthread_create(&cid,NULL,consumer,NULL);    //创建消费者
		if(ret!=0)
		{	
				fprintf(stderr,"consumer create%s",strerror(ret));
		}
		ret = pthread_create(&cid,NULL,consumer,NULL);    //创建消费者
		if(ret!=0)
		{	
				fprintf(stderr,"consumer create%s",strerror(ret));
		}

		pthread_join(pid,NULL);
		pthread_join(pid,NULL);

		return 0;
}
