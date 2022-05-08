#include <stdio.h>
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设这一趟如果数组有序，则不需要排序
		//冒泡排序的趟数
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			//每一趟的冒泡排序比较
			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//重置flag，本躺排序的数据无序
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int i = 0;
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);//对数组进行排序
	for (i = 0; i < sz; i++)
	{
		printf("%d \n",arr[i]);
	}
	return 0;
}