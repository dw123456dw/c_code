#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	for (i = 1000;i <= 2000;i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)//�ж��Ƿ�����������1���ܱ�4���������ܱ�100����
//                                                         //2���ܱ�400����
//		{
//			printf("%d ",i);
//			num++;
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d ", i);
//			num++;
//		}
//	}
//	printf("\nnum =%d",num);
//	return 0;
//}

//���������


int main()
{
	int i = 0;
	for (i = 1000;i <= 2000;i++)
	{
		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
		{
			printf("%d ",i);
		}
	}
}