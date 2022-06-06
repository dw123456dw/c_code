#include <stdio.h>
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			arr[i][0] = 1;
			arr[i][i] = 1;
			if (j < i && j != 0)
			{
				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
			}
			printf("%-3d  ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}