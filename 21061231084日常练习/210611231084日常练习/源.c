#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 300; i += 10)
//	{
//		printf("华氏度是%d,摄氏度是%f\n",i,(double)(5%(9*(i-32))));
//	}
//	return 0;
//}
//int main()
//{
//	double i = 0;
//	printf("请输入年增长率: \n");
//	scanf("%lf",&i);
//	double x = 1000000;
//	int count = 0;
//	while (2000000>=x)
//	{
//		x = x+x * i;
//		count++;
//	}
//	printf("需要%d年\n",count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		int tmp = i;
//		int sum = 0;
//		while (tmp!=0)
//		{
//			sum += pow(tmp%10,3);
//			tmp /= 10;
//		}
//		if ((sum == i)&&sum>100)
//		{
//			printf("%d\n",sum);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int m = 1, n = 0;
//	printf("请输入一个数:\n");
//	scanf("%d",&n);
//	int sum = 1,ret=0;
//	while (ret<n)
//	{
//		sum *= m;
//		ret += sum;
//		m++;
//	}
//	printf("%d",m-2);
//
//	return 0;
//}
//int main()
//{
//	int i = 0, find = 0,x=0,y=0,z=0;
//	for (x = 1; x < 30; x++)
//	{
//		for (y = 1; y < 30; y++)
//		{
//			for (z = 1; z < 30; z++)
//			{
//				if (50==(3*x+2*y+z)&&30==(x+y+z))
//				{
//					printf("男人:%d,女人:%d,小孩:%d\n",x,y,z);
//
//				}
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0,j=0;
//	for (i = 0; i < 98; i++)
//	{
//		for (j = 0; j < 98; j++)
//		{
//			if (98 == (i + j) && 386 == (i * 4 + j * 2))
//			{
//				printf("兔子：%d,鸡:%d\n", i, j);
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int x = 0, y = 0, z = 0;
//	for (x = 1; x < 100; x++)
//	{
//		for (y = 1; y < 100; y++)
//		{
//			for (z = 1; z < 100; z++)
//			{
//				if (100==(5*x+3*y+z/3)&&z%3==0)
//				{
//					printf("公鸡:%d,母鸡:%d,小鸡:%d\n",x,y,z);
//				}
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//
//	int i = 0, j = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%-2d  ",i+1);
//	}
//	printf("\n");
//	for (i = 0; i < 9; i++)
//	{
//		printf("-   ");
//	}
//	printf("\n");
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <10 ; j++)
//		{
//			printf("%-2d  ",i*j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%-2d  ",i+1);
//	}
//	printf("\n");
//	for (i = 0; i < 9; i++)
//	{
//		printf("-   ");
//	}
//	printf("\n");
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d  ",i*j);
//		}
//		printf("\n");
//
//	}
//	return 0;
//}