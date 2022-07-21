#include <stdio.h>



void Swap(int *p1,int *p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}


void ADjustDown(int *a,int n,int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child+1 > n && a[child+1] < a[child])
		{
			child += 1;
		}
		if (a[child] > a[parent])
		{
			Swap(&a[child],&a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}




void HeadSort(int *a,int n)
{
	for(int i=(n-1-1)/2 ; i>=0 ; i--)
	{
		ADjustDown(a,n,i);
	}

	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0],&a[end]);
		ADjustDown(a,end,0);
		end--;
	}

}

int main()
{
	int a[] = {3,5,2,7,8,6,1,9,4,0};

	//½¨¶Ñ
	HeadSort(a,sizeof(a)/sizeof(int));
	int i = 0;
	for (i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}

	return 0;
}