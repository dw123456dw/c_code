#include "head.h"

void menu()
{
	printf("*********************************\n");
	printf("***** ��ӭʹ��ATM�ն�ģ��� *****\n");
	printf("***** 0.�˳�     1.��ѯ��� *****\n");
	printf("***** 2.ȡ��     3.���     *****\n");
	printf("***** 4.ת��     5.�޸����� *****\n");
	printf("*********************************\n");
}

void test(accountdata data[])
{
	int  pn, password, count = 0, choose = 1, location = 0, translocation = 0;
	char ID[10],transferID[10];
	printf("��ӭʹ��ATM�������뿨��: \n");
	scanf("%s", ID);

	if ((pn=(searchID(data,ID, &location)))==0)
	{
		printf("���Ų�����,��ӭ�´�ʹ��\n");
		return;
	}

	printf("����������\n");
	scanf("%d",&password);

	while ((searchpassword(data,password)==0))
	{
		printf("����������������� \n");
		scanf("%d",&password);
		count++;
		if (count==2)
		{
			printf("��������Ѵ����Σ���ӭ�´�ʹ��\n");
			return;
		}
	}

	printf("��¼�ɹ�\n");
	while (choose)
	{
		menu();
		printf("��ѡ��: \n");
		scanf("%d", &choose);

		switch (choose)
		{
		case 0:
			printf("�˳��ɹ�\n");
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
			printf("������ת���˺�\n");
			scanf("%s",transferID);
			if (pn = (searchID(data, transferID, &translocation)) == 0)
			{
				printf("���Ų�����,����ǰ��ҵ����ע�ᣬ��ӭ�´�ʹ��\n");
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