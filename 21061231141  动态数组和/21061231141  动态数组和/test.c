#include <stdio.h>

int main()
{
	int arr[4] = {1,2,3,4};
	int size = sizeof(arr) / sizeof(arr[0]);

	int* result = (int*)malloc(sizeof(int)*size);

	for (int k=0;k<size;k++)
	{
		result[k] = 0;
	}

	int i = 0, j = 0;

	for (i=0;i<size;i++)
	{
		for (j=0;j<=i;j++)
		{
			result[i] += arr[j];
		}

	}

	return 0;
}