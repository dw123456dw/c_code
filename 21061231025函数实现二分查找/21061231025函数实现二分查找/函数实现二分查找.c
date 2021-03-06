#include <stdio.h>
#include <string.h>
int search(int arr[],int k,int sz)
{
	//算法实现寻找元素
	int left = 0;
	int right =sz-1;
	while(left<=right)//
	{
		int mid = (left + right) / 2;//放的位置
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
			return mid;
	
	}
	return 1;//
}
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int k = 11;
	int sz =sizeof(arr)/sizeof(arr[0]); //必须放主函数里
	int ret = search(arr, k,sz);//把需要的值传给函数
	if (search(arr,k,sz) == 1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了下标是%d\n",ret);
	}
	return 0;
}