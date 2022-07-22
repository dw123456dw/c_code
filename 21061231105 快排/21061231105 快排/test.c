#include <stdio.h>



void QuickSort(int* a, int left, int right)
{

	if (left >= right)
	{
		return;
	}


	int begin = left, end = right;
	int povit = begin;
	int key = a[begin];

	while (begin < end)
	{
		//从右边找比key小的放到左边坑里
		while (begin < end && a[end] >= key)
		{
			--end;
		}

		a[povit] = a[end];
		povit = end;

		//从左边找比key大的值放到右边坑里
		while (begin < end && a[begin] <= key)
		{
			begin++;
		}

		a[povit] = a[begin];
		povit = begin;
	}

	a[begin] = key;

	QuickSort(a,left,povit-1);
	QuickSort(a,povit+1,right);

}


int main()
{
	int a[] = {6,9,4,8,1,5,2,3,7,0};

	QuickSort(a,0,sizeof(a)/sizeof(int)-1);

	int i = 0;
	for (i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}

	return 0;
}