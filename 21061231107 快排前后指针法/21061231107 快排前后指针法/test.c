#include <stdio.h>



void Swap(int* tmp1,int* tmp2)
{
	int tmp = *tmp1;
	*tmp1 = *tmp2;
	*tmp2 = tmp;
}

void PartSort(int* a,int left,int right)
{
	if (left >= right)
	{
		return;
	}


	int keyi = left;
	int cur = left, prev = left;

	while (cur < right)
	{
		cur++;

		while (a[cur] < a[keyi])
		{
			prev++;
			Swap(&a[cur], &a[prev]);
		}

	}

	Swap(&a[keyi],&a[prev]);

	PartSort(a,left,keyi);
	PartSort(a,keyi+1,right);

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