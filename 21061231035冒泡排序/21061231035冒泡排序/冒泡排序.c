#include <stdio.h>
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//������һ�����������������Ҫ����
		//ð�����������
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			//ÿһ�˵�ð������Ƚ�
			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//����flag�������������������
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int i = 0;
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);//�������������
	for (i = 0; i < sz; i++)
	{
		printf("%d \n",arr[i]);
	}
	return 0;
}