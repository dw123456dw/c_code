#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	for (i = 1000;i <= 2000;i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)//判断是否是闰年条件1：能被4整除但不能被100整除
//                                                         //2：能被400整除
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

//精简版下面


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