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
	char mine[ROWS][COLS] = {0};//����11*11���鲼������Ϣ
	char show[ROWS][COLS] = { 0 };//��ӡ�Ų��׵���Ϣ
	initboard(mine, ROWS, COLS,'0');//��ʼ��
	initboard(show, ROWS, COLS,'*');//��ʼ��
	//��ӡ����
	displayboard(show, ROW, COL);
	//������
	setmine(mine,ROW,COL);
	displayboard(mine, ROW, COL);
	//ɨ��
	findmine(mine,show,ROW,COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�����������������룺\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}