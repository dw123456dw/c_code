#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int arr[10];
	int max = 0;
	printf("请输入10个数:");
	for (i = 0; i <= 9; i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i = 0; i <= 9; i++)
	{
		while (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("最大值为%d",max);
	return 0;
}