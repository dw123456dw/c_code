#include "head.h"




void deposit(accountdata data[], int location)
{
	int money;

	printf("��������Ҫ��Ľ��: \n");
	scanf("%d",&money);





	data[location].money = data[location].money + money;



	savehistory(data, 4, location, money);

}