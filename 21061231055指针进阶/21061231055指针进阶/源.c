#include <stdio.h>
void print1(int arr[3][5],int x,int y)//一般方法
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

void print2(int (*p)[5],int x,int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			//printf("%d ",*(*(p+i)+j));
			//printf("%d ",p[i][j]);
			//printf("%d ",(*(p+i))[j]);
			printf("%d ",*(p[i]+j));
		}
		printf("\n");
	}
}

int main()//数组指针的使用
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	//print1(arr, 3, 5);//一般方法
	print2(arr,3,5);//数组指针打印
	return 0;
}