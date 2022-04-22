#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
void game()
{
	int ret = 0;
	int a = 0;
	ret = rand()%100+1;//使随机生成的数在100范围内。
	while (1)
	{
		printf("请输入:");
		scanf("%d",&a);
		if (a > ret)
		{
			printf("猜大了\n");
		}
		else if (a < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}

	}
  
}
void menu()
{
	printf("#######################################\n");
	printf("#######################################\n");
	printf("#####      1.play 0.exit          #####\n");
	printf("#######################################\n");
	printf("#######################################\n");
}
int main()
{
	srand((unsigned int)time(NULL));//在主函数中生成一次随机数就行了。
	int i = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d",&i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏再见！");
			break;
		default:
			break;
		}
	} while (i);
	return 0;
}