#include "head.h"



void changepassword(accountdata data[],int location)
{
	int password1 = 1,password2 = 0;
	printf("������Ҫ�޸ĵ����� \n");
	scanf("%d",&password1);
	printf("��������һ�� \n");

	scanf("%d", &password2);

	while(password1 != password2)
	{
		printf("������������������������� \n");
		scanf("%d",&password2);
	}

	data[location].Password = password1;

	printf("�޸ĳɹ�\n");

	savehistory(data, 1, location, 0);

}