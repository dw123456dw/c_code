#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


void swap(int* end1,int* end2)
{
	int tmp = *end1;
	*end1 = *end2;
	*end2 = tmp;
}


void InsertSort(int* a,int n,int i)
{
	int end ;

	for (i=0;i<n-1;i++)
	{
		end = i;
		while (end >= 0)
		{
			if (a[end + 1] < a[end])
			{
				swap(&a[end + 1], &a[end]);
				end--;
			}
			else
			{
				break;
			}
		}
	}

}





int main()
{
	int i = 0;
	int a[] = {9,5,7,7,4,4,6,5,2,0};
	InsertSort(a,sizeof(a)/sizeof(int),i);
	for (i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}


	return 0;
}
