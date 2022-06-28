#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


//int Get_age(int i)
//{
//	static int count = 0;
//	if (count<4)
//	{
//		count++;
//		i += 2;
//		Get_age(i);
//	}
//	else
//	{
//		return i;
//	}
//}
//
//int main()
//{
//	int n = 10;
//	int ret=Get_age(n);
//	printf("第五个的年龄:%d\n",ret);
//	return 0;
//}

void menu()
{
	printf("************************************\n");
	printf("************************************\n");
	printf("******    1.Play     0.Exit  *******\n");
	printf("************************************\n");
	printf("************************************\n");
}


int firstplayer()
{
	int fp = rand() % 2;
	return fp;
}


void Game()
{
	int ret = firstplayer();
	int count = 0;
	int x = 0, y = 0, n = 0;
	if (ret==1)
	{
		printf("玩家先走\n");
	}
	else
	{
		printf("电脑先走\n");
	}
	while (count<30)
	{
		if (ret==1)//玩家先走
		{
			printf("你要报几个数: 1/2\n");
			scanf("%d",&n);
			if (n==1)
			{
				printf("请输入你报的一个数:");
				scanf("%d",&x);
				count++;
				ret = 0;
				if (x==30)
				{
					printf("玩家赢了\n");
					break;
				}
			}
			else
			{
				printf("请输入你要报的两个数:");
				scanf("%d%d",&x,&y);
				count += 2;
				ret = 0;//重置ret下次让电脑走
				if (x==30||y==30)
				{
					printf("玩家赢了\n");

					break;
				}
			}
		}
		else//电脑先走
		{
			if ((30-count)%3==1)
			{
				printf("计算机报一个数:%d\n",x+2);
				ret = 1;
				count++;
				if (x+2>=30)
				{
					printf("计算机赢了\n");
					break;
				}
			}
			else if ((30-count)%3==2)
			{
				printf("计算机报两个连续的数:%d,%d\n",x+2,x+3);
				ret = 1;
				count += 2;
				if (x+2>=30||x+3>=30)
				{
					printf("计算机赢了\n");
					break;
				}
			}
			else
			{
				if (count%2==0)
				{
					printf("计算机报一个数:%d\n", x + 2);
					ret = 1;
					count++;
					if (x + 2 >= 30)
					{
						printf("计算机赢了\n");
						break;
					}
				}
				else
				{
					printf("计算机报两个连续的数:%d,%d\n", x + 2, x + 3);
					ret = 1;
					count += 2;
					if (x + 2 >= 30 || x + 3 >= 30)
					{
						printf("计算机赢了\n");

						break;
					}
				}
			}
		}
	}
}




int main()
{
	srand((unsigned int)time(NULL));//生产随机数
	int i = 0;
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d",&i);
		switch(i)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("退出游戏.\n");
			break;
		default:
			printf("输入错误.\n");
			break;
		}

	} while (i);
	return 0;
}