#include "head.h"


void transfermoney(accountdata data[],int  location,int translocation)
{
	int money;
	printf("请输入转账金额: \n");
	scanf("%d",&money);

	data[location].money = data[location].money - money;
	data[translocation].money = data[translocation].money + money;

	printf("转账成功 \n");

	savehistory(data,0,translocation,money);
	money = -money;
	savehistory(data, 0, location, money);

}
