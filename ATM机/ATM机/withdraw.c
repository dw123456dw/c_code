#include "head.h"


void withdraw(accountdata data[], int location)
{
	int money = 0;
	printf("������Ҫȡ�Ľ��\n");
	scanf("%d", &money);


	while(money>data[location].money || money > 2500 || money%50 != 0)
	{
		if (money > data[location].money)
		{
			printf("��������\n");
		}
		else if (money > 2500)
		{
			printf("һ��ֻ��ȡ2500���� \n");
		}
		else if (money%50 != 0)
		{
			printf("ֻ��50��100����� \n");
		}
		money = 0;
		printf("����������ȡ���� :  ��0�˳�. \n");
		scanf("%d",&money);
		if (money == 0)
		{
			return;
		}

	}
	printf("ȡ��ɹ�\n");
	data[location].money = data[location].money - money;


	money = -money;

	savehistory(data, 3, location, money);

}