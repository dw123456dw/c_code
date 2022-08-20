#include "head.h"

void menu()
{
	printf("*********************************\n");
	printf("***** 欢迎使用ATM终端模拟机 *****\n");
	printf("***** 0.退出     1.查询余额 *****\n");
	printf("***** 2.取款     3.存款     *****\n");
	printf("***** 4.转账     5.修改密码 *****\n");
	printf("*********************************\n");
}

void test(accountdata data[])
{
	int  pn, password, count = 0, choose = 1, location = 0, translocation = 0;
	char ID[10],transferID[10];
	printf("欢迎使用ATM机请输入卡号: \n");
	scanf("%s", ID);

	if ((pn=(searchID(data,ID, &location)))==0)
	{
		printf("卡号不存在,欢迎下次使用\n");
		return;
	}

	printf("请输入密码\n");
	scanf("%d",&password);

	while ((searchpassword(data,password)==0))
	{
		printf("密码错误请重新输入 \n");
		scanf("%d",&password);
		count++;
		if (count==2)
		{
			printf("密码错误已达三次，欢迎下次使用\n");
			return;
		}
	}

	printf("登录成功\n");
	while (choose)
	{
		menu();
		printf("请选择: \n");
		scanf("%d", &choose);

		switch (choose)
		{
		case 0:
			printf("退出成功\n");
			break;
		case 1:
			checkmoney(data, location);
			break;
		case 2:
			withdraw(data,location);
			break;
		case 3:
			deposit(data,location);
			break;
		case 4:
			printf("请输入转账账号\n");
			scanf("%s",transferID);
			if (pn = (searchID(data, transferID, &translocation)) == 0)
			{
				printf("卡号不存在,请先前往业务厅注册，欢迎下次使用\n");
				return;
			}

			transfermoney(data,location,translocation);
			break;
		case 5:
			changepassword(data,location);
			break;
		}
	}



}