#include <stdio.h>


void Swap(int* tmp1,int* tmp2)
{
	int tmp = *tmp1;
	*tmp1 = *tmp2;
	*tmp2 = tmp;
}


void PartSort(int* a,int left, int right)
{
	//�ݹ���ֹ����
	if (left >= right)
	{
		return;
	}

	//���ο���
	int begin = left, end = right;
	int keyi = begin;

	while (begin < end)
	{

		while (begin < end && a[end] >= a[keyi])
		{
			end--;
		}

		while (begin < end && a[begin] <= a[keyi])
		{
			begin++;
		}

		Swap(&a[begin],&a[end]);

	}
	//��󽻻�
	Swap(&a[begin],&a[keyi]);

	//�ݹ�ź�λ�õ��Ǹ��������ұ߼���
	PartSort(a,left,begin);
	PartSort(a,begin+1,right);
}


int main()
{
	int a[] = { 6,9,2,7,8,3,1,4,5,0 };

	PartSort(a,0,sizeof(a)/sizeof(int)-1);

	int i = 0;
	for (i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}


	return 0;

}