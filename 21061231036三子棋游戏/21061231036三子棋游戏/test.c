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
	//���ó�ʼ������
	initboard(board,ROW,COL);
	//��ӡ����
	Displayboard(board,ROW,COL);
	//��ʼ����
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
		printf("���Ӯ\n");
	}
	else if (ret=='#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void test()
{

	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//�˵�
		printf("��ѡ��\n");
		scanf("%d",&input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("���������룺\n");
			break;
		}
	} while (input==0);
	}
int main()
{
	test();
	return 0;	
}







