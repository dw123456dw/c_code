#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void my_sort(int arr1[],int arr2[])
{
	int i = 0;
	for (i = 0;i < 9;i++)
	{
		int j = 0;
		for (j = 0;j< 9 - i;j++)
		{
			if (arr2[j] > arr2[j + 1])
			{
				int tmp = 0;
				tmp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = tmp;
				int tmp1 = 0;
				tmp1 = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = tmp;
			}
		}
	}
}
void print(int arr1[],int arr2[])
{
	int i = 0;
	int ret = 0;
	for (i = 0;i < 10;i++)
	{
		printf("��������:%d\n", arr2[i]);
	}
	for (i = 0;i < 10;i++)
	{
		if (i == 0)
		{
			printf("��ͳɼ��ǣ�ѧ��%d  %d\n",arr1[i],arr2[i]);
		}
		else if (i == 9)
		{
			printf("��߳ɼ���: ѧ��%d  %d\n",arr1[i],arr2[i]);
		}
		ret += arr2[i];
	}
	printf("ƽ���ɼ���: %d\n",ret/10);
}
int main()
{
	int i = 0;
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	for (i = 0;i < 10;i++)
	{
		printf("�������%d��ѧ��ѧ�źͳɼ�:\n",i+1);
		scanf("%d%d",&arr1[i],&arr2[i]);
	}
	my_sort(arr1, arr2);
	print(arr1,arr2);
	return 0;
}