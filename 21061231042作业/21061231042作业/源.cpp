#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int str = 0;
	printf("��ӭ����ѡ��ϵͳ��������ѧ�ţ�");
	scanf("%d",&str);
	if (str==1234)
	{
		printf("----��ӭ��ʼѡ��----\n");
		int j = 0;
		printf("1->��ѯ��ѡ�γ̣�\n");
		printf("2->��ʼѡ�Σ�\n");
		printf("3->�˳�ѡ��ϵͳ��\n");
		printf("���������ѡ����Ĳ�����\n");
		scanf("%d",&j);
		switch (j)
		{
		case 1:
		{
			printf("��ѯ��ѡ�γ�\n");
			break;
		}
		case 2:
		{
			printf("��ʼ    ѡ��\n");
			break;
		}
		case 3:
		{
			printf("�˳�\n");
			break;
		}
		default:
			printf("�������\n");
			break;
		}
	}
	else
	{
		printf("ѧ�Ŵ���\n");
	}
	return 0;
}

