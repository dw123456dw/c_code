#include "head.h"




void deposit(accountdata data[], int location)
{
	int money;

	printf("请输入您要存的金额: \n");
	scanf("%d",&money);





	data[location].money = data[location].money + money;



	savehistory(data, 4, location, money);

}