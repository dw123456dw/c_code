#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 1;
	int j = 1;
	while (i < 10)
	{
		j = 1;
		while (j<=i)
		{
			printf("%d*%d=%d ",j,i,i*j);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
//int main()
//{
//	int i = 0;//��
//	int j = 1;//��
//	while (i<5)
//	{
//	    j = 4;
//		for (j = 4; j <2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		i++;
//
//	}
//}
//int main()
//{
//	int i = 0;
//	int count = 3;
//	while (count)
//	{
//		printf("������ѧ�ţ�");
//		scanf("%d", &i);
//		if (i == 1234)
//		{
//			printf("����ѡ��ϵͳ\n");
//			break;
//		}
//		else
//		{
//			count--;
//		}
//	}
//	if (i != 1234)
//	{
//		printf("������󳬹������˳�ϵͳ\n");
//	}
//	return 0;
//}

