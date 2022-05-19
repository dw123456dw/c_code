#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int find_dif_bit(int i,int j)
//{
//	int n = 0;
//	int count = 0;
//	n = i ^ j;
//	while(n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("请输入两个数：");
//	scanf("%d%d",&i,&j);
//	int count= find_dif_bit(i,j);
//	printf("%d",count);
//	return 0;
//}
//打印二进制的奇偶数列
//void print(unsigned int x)
//{
//	int i = 0;
//	printf("奇数位：");
//	for (i = 30; i >= 0;i-=2)
//	{
//		printf("%d",(x>>i)&1);
//	}
//	printf("\n");
//	printf("偶数位：");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (x >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int i = -1;
//	print(i);
//	return 0;
//}
//指针打印数族
//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	{
//		printf("%d",*(p+i));
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	print(p,sz);
//	return 0;
//}
//递归打印一个整数的每一位
//int print(int i)
//{
//	if (i == 0)
//	{
//	}
//	else
//	{
//		return printf("%d",print(i/10));
//	}
//
//}
//int main()
//{
//	int i = 1564;
//	print(i);
//	return 0;
//}
void get_two(int i)//验证一个字节最大放255
{
	int x = 0;
	for (x = 0; x < 8; x++)
	{
		printf("%d",(i >> x) & 1);
	}
}
int main()
{
	int i = 255;
	get_two(i);
	return 0;
}