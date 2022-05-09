#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("****************\n");
	printf("***** 1.play ***\n");
	printf("***** 0.exit ***\n");
	printf("****************\n");
}
void game()
{
	char mine[ROWS][COLS] = {0};//创建11*11数组布置雷信息
	char show[ROWS][COLS] = { 0 };//打印排查雷的消息
	initboard(mine, ROWS, COLS,'0');//初始化
	initboard(show, ROWS, COLS,'*');//初始化
	//打印棋盘
	displayboard(show, ROW, COL);
	//布置雷
	setmine(mine,ROW,COL);
	displayboard(mine, ROW, COL);
	//扫雷
	findmine(mine,show,ROW,COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入有误，请重新输入：\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}