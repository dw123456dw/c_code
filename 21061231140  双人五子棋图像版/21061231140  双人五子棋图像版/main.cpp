#include "head.h"

void menu()
{
	printf("*********************************\n");
	printf("***  ��ӭ����˫���������ս   ***\n");
	printf("***    1.���ع���ʼ��Ϸ     ***\n");
	printf("***    0.�����ع����˳�       ***\n");
	printf("*********************************\n");
}


void PrintBoard()   //��������
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
	int chees[N][N] = {0};    //��ʼ��Ϊ0
	menu();
	printf("��ѡ��\n");
	scanf("%d",&choose1);
	if (choose1==1)
	{
		printf("��ѡ��˭����?   1:�� 2:��\n");
		scanf("%d",&n);
		PrintBoard();
		MainProcess(chees, n);
	}
	else
	{
		printf("�ټ�!\n");
		return ;
	}
}


int main()
{
	test();
	return 0;
}



