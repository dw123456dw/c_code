#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//void Up(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//
//}
//
//void Down(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j+1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//
//}
//
//void Select(int arr[], int sz, void (*Hhh)(int arr[],int))
//{
//	(*Hhh)(arr,sz);
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 5,2,1,3,6,4,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("想要升还是降:1/2.\n");
//	scanf("%d",&i);
//	if (1==i)
//	{
//		Select(arr,sz,Up);//函数指针
//	}
//	else
//	{
//		Select(arr,sz,Down);//
//	}
//	for (i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}

//void DivArray(int *arr,int n)
//{
//	int tmp = *arr;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] /= tmp;
//	}
//}
//
//
//int main()
//{
//	int i = 0;
//	int arr[4] = { 2,4,6,8 };
//	DivArray(arr,4);
//	for (i=0;i<4;i++)
//	{
//		printf("%d  ",arr[i]);
//	}
//	return 0;
//}
//函数返回输入年月日是本年的第几天
//int DayofYear(int year,int month,int day)
//{
//	int arr[][12] = {31,28,31,30,31,30,31,30,31,30,31,30,31,29,31,30,31,30,31,30,31,30,31,30};
//	if (((year%4==0)&&(year%100!=0))||(year%400==0))//闰年
//	{
//		int i = 0,ret=0;
//		for (i=0;i<month-1;i++)
//		{
//			ret += arr[0][i];
//		}
//		ret += day;
//		return ret;
//	}
//	else
//	{
//		int i = 0, ret = 0;
//		for (i = 0; i < month - 1; i++)
//		{
//			ret += arr[1][i];
//		}
//		ret += day;
//		return ret;
//	}
//}
//int main()
//{
//	int year = 0, month = 0, day = 0;
//	printf("请输入年月日: ");
//	scanf("%d%d%d",&year,&month,&day);
//	//函数参数为输入的年月日，返回是本年的第几天
//	int ret= DayofYear(year,month,day);
//	printf("是这年的第%d天\n",ret);
//
//	return 0;
//}

