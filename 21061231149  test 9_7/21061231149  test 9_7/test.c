#include <stdio.h>

int QSort(int arr[],int left,int right)
{
	int x = arr[left];

	while (left<right)
	{
		while (left<right && arr[right]>=x)
		{
			right--;
		}
		if (left<right)
		{
			arr[left] = arr[right];
			left++;
		}
		while (left<right && arr[left]<x)
		{
			left++;
		}
		if (left<right)
		{
			arr[right] = arr[left];
			right--;
		}
	}
	arr[left] = x;
	return left;
}
 
void QKSort(int arr[],int left,int right)
{
	if (left<right)
	{
		int pos = QSort(arr,left,right);
		QKSort(arr,left,pos);
		QKSort(arr,pos+1,right);
	}
}

int main()
{
	int arr[] = { 3,3,2};
	QKSort(arr,0,2);
	for (int i=0;i<3;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}