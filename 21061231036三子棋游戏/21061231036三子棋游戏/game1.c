#include "game1.h"
void initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)//��������
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//�������ȱ�ɿո�
		}
	}
}



void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//1.��ӡһ�е�����
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < row - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//��ӡ�ָ���
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}


void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("����������:>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= ROW && y>=1 && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�������ѱ�ռ��\n");
			}
		}
		else
		{
			printf("����Ƿ�,����������\n");
		}
	}

}



void Computermove(char board[ROW][COL], int row, int col)
{
	printf("������:\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y]==' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}


int IsFull(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < ROW;i++)
	{
		for (j = 0;j < COL;j++)
		{
			if (board[i][j]==' ')
			{
				return 0;
			}

		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0;i < ROW;i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0;i < COL;i++)
	{
		if (board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[0][i]!=' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
	{
		return board[0][0];
	}
	if (board[1][2]==board[1][1]&&board[1][1]==board[2][1]&&board[2][1]!=' ')
	{
		return board[1][2];
	}
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}
