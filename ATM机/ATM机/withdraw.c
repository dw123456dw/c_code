#include "head.h"


void withdraw(accountdata data[], int location)
{
	int money = 0;
	printf("请输入要取的金额\n");
	scanf("%d", &money);


	while(money>data[location].money || money > 2500 || money%50 != 0)
	{
		if (money > data[location].money)
		{
			printf("您的余额不足\n");
		}
		else if (money > 2500)
		{
			printf("一次只能取2500以内 \n");
		}
		else if (money%50 != 0)
		{
			printf("只有50和100的面额 \n");
		}
		money = 0;
		printf("请重新输入取款金额 :  按0退出. \n");
		scanf("%d",&money);
		if (money == 0)
		{
			return;
		}

	}
	printf("取款成功\n");
	data[location].money = data[location].money - money;


	money = -money;

	savehistory(data, 3, location, money);

}