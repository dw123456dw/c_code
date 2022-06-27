#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int hour, minute, second;
//
//void Updata()
//{
//	second++;
//	if (second==60)
//	{
//		second = 0;
//		minute++;
//	}
//	if (minute==60)
//	{
//		minute = 0;
//		hour++;
//	}
//	if (hour == 24)
//	{
//		hour = 0;
//	}
//}
//
//void Display()
//{
//	printf("%d:%d:%d\n",hour,minute,second);
//}
//
//void Delay()
//{
//	int t;
//	for(t = 0; t < 100000000; t++);
//}
//
//int main()
//{
//	int i;
//
//	for (i = 0; i < 1000000; i++)
//	{
//		Updata();
//		Display();
//		Delay();
//	}
//	return 0;
//}


//int Get_lcm(int i, int j)
//{
//	int a = 0, b = 0;
//	if (i%2==0&&j%2==0)
//	{
//		for (a = 1;a<20; a++)
//		{
//			for (b = 1;b<20 ; b++)
//			{
//				if (i * a == j * b)
//				{
//					return i * a;
//				}
//
//			}
//		}
//	}
//	else
//	{
//		return i * j;
//	}
//
//}
//
//int main()
//{
//	int i = 0, j = 0;
//	printf("请输入两个数:\n");
//	scanf("%d%d",&i,&j);
//	int ret= Get_lcm(i, j);
//	printf("最小公倍数是%d",ret);
//	return 0;
//}

//int Get_gcd(int i, int j)
//{
//	int t = i < j ? i: j;
//	while (!(i%t==0&&j%t==0))
//	{
//		t--;
//	}
//	return t;
//}
//
//int main()
//{
//	int i = 0, j = 0;
//	printf("请输入两个数:\n");
//	scanf("%d%d",&i,&j);
//	int ret = Get_gcd(i, j);
//	printf("最大公约数是:%d\n",ret);
//	return 0;
//}

//int Get_gcd(int a,int b)
//{
//	int r=a%b;
//	while(r)
//	{
//		a = b;
//		b = r;
//		r = a % b;
//	}
//	return b;
//}
//int Get_gcd(int a, int b)
//{
//	if (a > b)
//	{
//		Get_gcd(a-b,b);
//	}
//	else if (a<b)
//	{
//		Get_gcd(a,b-a);
//	}
//	else
//	{
//		return a;
//	}
//
//}
//
//int main()
//{
//	int i = 0, j = 0;
//	printf("请输入两个数:\n");
//	scanf("%d%d",&i,&j);
//	int ret = Get_gcd(i, j);
//	printf("最大公约数是:%d\n",ret);
//	return 0;
//}