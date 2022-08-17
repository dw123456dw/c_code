#define _CRT_SECURE_NO_WARNINGS
#include "ATM.h"


void menu()
{
	printf("***********************************\n");
	printf("****   ATM终端机模拟系统      *****\n");
	printf("****  0.退出       1.修改密码 *****\n");
	printf("****  2.查询余额   3.取款     *****\n");
	printf("****  4.转账       5.日志     *****\n");
	printf("***********************************\n");
}
void menu1()
{
	printf("***********************");
	printf("*** 1.插卡  0.退出 ****");
	printf("***********************");
}

void test()
{
	PERSON arr[3] = { {21061231,111111,1000},{21061232,222222,9999},{21061233,333333,20000} };
	account(arr);
	int choice1 = 0,choice2;
	menu1();
	printf("请选择： ");
	scanf("%d",&choice2);
	if (choice2==1)
	{
		login(arr);
	}

	menu();
	printf("请选择: ");
	scanf("%d", &choice1);
	switch (choice1)
	{
	case 0:
		printf("退出系统!");
		break;
	case 1:
		changepassword();
		break;

	default:
		break;
	}
}