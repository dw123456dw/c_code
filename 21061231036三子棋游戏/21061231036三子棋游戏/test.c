#include "game1.h"
void menu()
{
	printf("*******************\n");
	printf("*** 1.play 0.exit**\n");
	printf("*******************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//还得初始化数组
	initboard(board,ROW,COL);
	//打印棋盘
	Displayboard(board,ROW,COL);
	//开始下棋
	while (1)
	{
		Playermove(board,ROW,COL);
		Displayboard(board, ROW, COL);

		ret = IsWin(board,ROW,COL);
		if (ret!='C')
		{
			break;
		}
		Computermove(board,ROW,COL);
		Displayboard(board, ROW, COL);

		ret = IsWin(board,ROW,COL);
		if (ret!='C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret=='#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test()
{

	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//菜单
		printf("请选择：\n");
		scanf("%d",&input);
		switch (input)
		{
		case 0:
			printf("退出游戏！\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("请重新输入：\n");
			break;
		}
	} while (input==0);
	}
int main()
{
	test();
	return 0;	
}







