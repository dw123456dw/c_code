#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void CountSort(int* a,int n)
{
	int Max = a[0], Min = a[0];
	//���ҵ����������С��
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

	//ʹ�����ӳ��
	int range = Max - Min+1;

	//ӳ��������мǳ�ʼ��Ϊ0
	int* count = (int*)malloc(sizeof(int)*range);
	memset(count,0,sizeof(int)*range);

	//ͳ�ƴ���
	for (int i=0;i<n;i++)
	{
		count[a[i]-Min]++;
	}

	//����ȥ
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