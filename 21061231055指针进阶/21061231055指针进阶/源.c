#include <stdio.h>
void print1(int arr[3][5],int x,int y)//һ�㷽��
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

int main()//����ָ���ʹ��
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	//print1(arr, 3, 5);//һ�㷽��
	print2(arr,3,5);//����ָ���ӡ
	return 0;
}