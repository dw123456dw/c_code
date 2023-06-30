#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
		int i;
		for(i=0;i<3;i++)
		{
			if(fork()==0)   //子线程break父线程才创建
			{
				break;
			}
		}	
		if(i==3)      //放循环里面就是创建一个子线程就打印一次因此是顺序打印
		{             //在外面就会一起争抢显示因此乱序
			sleep(1);
			printf("i am parent\n");
		}
		else
			printf("i am %dth child\n",i+1);
		return 0;
}
