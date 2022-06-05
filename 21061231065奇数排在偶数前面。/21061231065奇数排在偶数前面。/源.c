#include <stdio.h>


void my_remove(int arr[10],int sz)//自己瞎写完成任务...
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] % 2 == 0)
			{
				int tmp = 0;
				tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
			}

		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_remove(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}