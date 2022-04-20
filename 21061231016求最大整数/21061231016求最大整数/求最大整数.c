#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//直接用一个变量和所有数组内的数比较，再把较大值赋给此变量。
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int max = arr[0];//不要max=0；防止数组为全负数时最大值为0，而不是数组里的负数。
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0;i<=sz;i++ )
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("%d ",max);
	return 0;
}
