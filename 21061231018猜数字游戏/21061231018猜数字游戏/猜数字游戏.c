#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
void game()
{
	int ret = 0;
	int a = 0;
	ret = rand()%100+1;//ʹ������ɵ�����100��Χ�ڡ�
	while (1)
	{
		printf("������:");
		scanf("%d",&a);
		if (a > ret)
		{
			printf("�´���\n");
		}
		else if (a < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
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
	srand((unsigned int)time(NULL));//��������������һ������������ˡ�
	int i = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ�ټ���");
			break;
		default:
			break;
		}
	} while (i);
	return 0;
}