#include <stdio.h>
#include <string.h>
int search(int arr[],int k,int sz)
{
	//�㷨ʵ��Ѱ��Ԫ��
	int left = 0;
	int right =sz-1;
	while(left<=right)//
	{
		int mid = (left + right) / 2;//�ŵ�λ��
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
			return mid;
	
	}
	return 1;//
}
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int k = 11;
	int sz =sizeof(arr)/sizeof(arr[0]); //�������������
	int ret = search(arr, k,sz);//����Ҫ��ֵ��������
	if (search(arr,k,sz) == 1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ����±���%d\n",ret);
	}
	return 0;
}