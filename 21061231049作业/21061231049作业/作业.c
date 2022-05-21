#include <stdio.h>

//void buble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 1;
//		int flag = 0;//如果数组本来就有序，则不需要排序
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag=0;//重置flag
//			}
//			if (flag == 1)
//			{
//				break;
//			}
//		}
//	}
//}
//int main()//冒泡排序从小到大
//{
//	int i = 0;
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	buble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//int main()//选择排序从小到大
//{
//	int arr[] = {10,9,8,7,6,5,4,3,2,1};
//	int i = 0,j=0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz-1; i++)
//	{
//		int flag = i;
//		for (j = i + 1; j < sz; j++)
//		{
//			int tmp = 0;
//			if (arr[flag] > arr[j])
//			{
//				flag = j;
//			}
//			tmp = arr[i];
//			arr[i] = arr[flag];
//			arr[flag] = tmp;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()//添加元素
//{
//	int arr[10] = {1,2,3,4,5,7,8,9,10};//添加6
//	int i = 0,j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz - 1; i++)
//	{
//		if (arr[i] > 6)
//		{
//			break;
//		}
//	}
//	for (j = sz - 2; j >= i; j--)
//	{
//		arr[j + 1] = arr[j];
//	}
//	sz++;
//	arr[i] = 6;
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//int main()//删除元素
//{
//	int arr[10] = {10,9,8,7,6,5,4,3,2,1};//删除5
//	int i = 0,j=0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz - 1; i++)
//	{
//		if (arr[i] == 5)
//		{
//			break;
//		}
//	}
//	for (j = i + 1; j < sz - 1;j++)//5
//	{
//		arr[j] = arr[j + 1];
//	}
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
int main()
{
	int i = 0,j=0,max2=0, max1 = 0;;
	int arr[5][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};//4,8,12,16,20
	for (i = 0; i < 5; i++)                                              //17.18.19.20
	{
		for (j = 0; j < 4; j++)
		{
			if (arr[i][j] > max1)
			{
				max1 = arr[i][j];
			}
		}
		printf("第%d行的最大值为%d \n",i+1, max1);
	}
	for (j = 0; j < 4; j++)
	{
		for (i = 0; i < 5; i++)
		{
			if (arr[i][j] > max2)
			{
				max2 = arr[i][j];
			}
		}
		printf("第%d列的最大值为%d \n", j+1, max2);
	}
}
