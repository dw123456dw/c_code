#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


//int Get_age(int i)
//{
//	static int count = 0;
//	if (count<4)
//	{
//		count++;
//		i += 2;
//		Get_age(i);
//	}
//	else
//	{
//		return i;
//	}
//}
//
//int main()
//{
//	int n = 10;
//	int ret=Get_age(n);
//	printf("�����������:%d\n",ret);
//	return 0;
//}

void menu()
{
	printf("************************************\n");
	printf("************************************\n");
	printf("******    1.Play     0.Exit  *******\n");
	printf("************************************\n");
	printf("************************************\n");
}


int firstplayer()
{
	int fp = rand() % 2;
	return fp;
}


void Game()
{
	int ret = firstplayer();
	int count = 0;
	int x = 0, y = 0, n = 0;
	if (ret==1)
	{
		printf("�������\n");
	}
	else
	{
		printf("��������\n");
	}
	while (count<30)
	{
		if (ret==1)//�������
		{
			printf("��Ҫ��������: 1/2\n");
			scanf("%d",&n);
			if (n==1)
			{
				printf("�������㱨��һ����:");
				scanf("%d",&x);
				count++;
				ret = 0;
				if (x==30)
				{
					printf("���Ӯ��\n");
					break;
				}
			}
			else
			{
				printf("��������Ҫ����������:");
				scanf("%d%d",&x,&y);
				count += 2;
				ret = 0;//����ret�´��õ�����
				if (x==30||y==30)
				{
					printf("���Ӯ��\n");

					break;
				}
			}
		}
		else//��������
		{
			if ((30-count)%3==1)
			{
				printf("�������һ����:%d\n",x+2);
				ret = 1;
				count++;
				if (x+2>=30)
				{
					printf("�����Ӯ��\n");
					break;
				}
			}
			else if ((30-count)%3==2)
			{
				printf("�������������������:%d,%d\n",x+2,x+3);
				ret = 1;
				count += 2;
				if (x+2>=30||x+3>=30)
				{
					printf("�����Ӯ��\n");
					break;
				}
			}
			else
			{
				if (count%2==0)
				{
					printf("�������һ����:%d\n", x + 2);
					ret = 1;
					count++;
					if (x + 2 >= 30)
					{
						printf("�����Ӯ��\n");
						break;
					}
				}
				else
				{
					printf("�������������������:%d,%d\n", x + 2, x + 3);
					ret = 1;
					count += 2;
					if (x + 2 >= 30 || x + 3 >= 30)
					{
						printf("�����Ӯ��\n");

						break;
					}
				}
			}
		}
	}
}




int main()
{
	srand((unsigned int)time(NULL));//���������
	int i = 0;
	do
	{
		menu();
		printf("��ѡ��:\n");
		scanf("%d",&i);
		switch(i)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("�˳���Ϸ.\n");
			break;
		default:
			printf("�������.\n");
			break;
		}

	} while (i);
	return 0;
}