#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void CountSort(int* a,int n)
{
	int Max = a[0], Min = a[0];
	//先找到最大数和最小数
	for (int i=0;i<n;i++)
	{
		if (a[i]>Max)
		{
			Max = a[i];
		}
		if (a[i]<Min)
		{
			Min = a[i];
		}
	}

	//使用相对映射
	int range = Max - Min+1;

	//映射的数组切记初始化为0
	int* count = (int*)malloc(sizeof(int)*range);
	memset(count,0,sizeof(int)*range);

	//统计次数
	for (int i=0;i<n;i++)
	{
		count[a[i]-Min]++;
	}

	//拷回去
	int j = 0;
	for (int i=0;i<range;i++)
	{
		while (count[i]--)
		{
			a[j++] = i + Min;
		}
	}


	free(count);
}



int main()
{
	int a[] = {104,104,109,102,105,108,108 };

	CountSort(a,sizeof(a)/sizeof(int));


	for (int i=0;i<7;i++)
	{
		printf("%d ",a[i]);
	}

	return 0;
}