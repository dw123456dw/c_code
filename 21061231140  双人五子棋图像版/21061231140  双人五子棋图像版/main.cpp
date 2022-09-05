#include "head.h"

void menu()
{
	printf("*********************************\n");
	printf("***  欢迎游玩双人五子棋对战   ***\n");
	printf("***    1.遵守规则开始游戏     ***\n");
	printf("***    0.不遵守规则退出       ***\n");
	printf("*********************************\n");
}


void PrintBoard()   //绘制棋盘
{
	int i = 0;
	initgraph(500, 500);
	setbkcolor(LIGHTGRAY);
	cleardevice();
	setcolor(RED);
	for (i = 0; i <= 500; i += 50)
	{
		line(i, 0, i, 500);
		line(0, i, 500, i);
	}
}


void test()
{
	int n;
	int choose1;
	int chees[N][N] = {0};    //初始化为0
	menu();
	printf("请选择\n");
	scanf("%d",&choose1);
	if (choose1==1)
	{
		printf("请选择谁先走?   1:白 2:黑\n");
		scanf("%d",&n);
		PrintBoard();
		MainProcess(chees, n);
	}
	else
	{
		printf("再见!\n");
		return ;
	}
}


int main()
{
	test();
	return 0;
}



