#define _CRT_SECURE_NO_WARNINGS
#include "ATM.h"


void menu()
{
	printf("***********************************\n");
	printf("****   ATM�ն˻�ģ��ϵͳ      *****\n");
	printf("****  0.�˳�       1.�޸����� *****\n");
	printf("****  2.��ѯ���   3.ȡ��     *****\n");
	printf("****  4.ת��       5.��־     *****\n");
	printf("***********************************\n");
}
void menu1()
{
	printf("***********************");
	printf("*** 1.�忨  0.�˳� ****");
	printf("***********************");
}

void test()
{
	PERSON arr[3] = { {21061231,111111,1000},{21061232,222222,9999},{21061233,333333,20000} };
	account(arr);
	int choice1 = 0,choice2;
	menu1();
	printf("��ѡ�� ");
	scanf("%d",&choice2);
	if (choice2==1)
	{
		login(arr);
	}

	menu();
	printf("��ѡ��: ");
	scanf("%d", &choice1);
	switch (choice1)
	{
	case 0:
		printf("�˳�ϵͳ!");
		break;
	case 1:
		changepassword();
		break;

	default:
		break;
	}
}