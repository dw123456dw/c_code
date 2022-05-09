#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			board[i][j] = set;
		}
	}
}
void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row+1;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1;i <=row;i++)
	{
		printf("%d ",i);
		for (j = 1;j<= col;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void setmine(char board[ROWS][COLS], int row, int col)
{
	int count = easy_count;
	while (count)
	{
		int x = rand()%row+1;//产生1~9随机的数字
		int y = rand()%col+1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1]
	+ mine[x][y + 1] + mine[x + 1][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';

}
void findmine(char mine[ROWS][COLS], char  show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-10)
	{
		printf("请输入要扫的坐标：\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标合法
			//1.是雷
			if (mine[x][y] == '1')
			{
				printf("你踩雷死了\n");
				displayboard(mine, row, col);
				break; 
					
			}
			else//不是雷，计算周围的雷的个数
			{
				int count= get_mine_count(mine,x,y);//获取x，y周围有多少个雷
				show[x][y] = count + '0';
				displayboard(show,row,col);
				win++;
			} 
		}
		else
		{
			printf("输入有误，请重新输入:\n");
		}
	}
	if (win == row * col - 10)
	{
		printf("排雷成功\n");
	}
}