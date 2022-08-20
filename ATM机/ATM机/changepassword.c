#include "head.h"



void changepassword(accountdata data[],int location)
{
	int password1 = 1,password2 = 0;
	printf("请输入要修改的密码 \n");
	scanf("%d",&password1);
	printf("请在输入一次 \n");

	scanf("%d", &password2);

	while(password1 != password2)
	{
		printf("您输入的密码有误，请重新输入 \n");
		scanf("%d",&password2);
	}

	data[location].Password = password1;

	printf("修改成功\n");

	savehistory(data, 1, location, 0);

}