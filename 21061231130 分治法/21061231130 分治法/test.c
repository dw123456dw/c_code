#include <stdio.h>

#define size 6

void FULL(int data[size][size],int number,int begin,int n)
{
	int i = begin, j = begin,a = 0;
	if (n==0)
	{
		printf("ты╪Ш\n");
		return ;
	}

	if (n==1)
	{
		data[begin][begin] = number;
		return ;
	}

	for (a=0;a<n-1;a++)
	{
		data[i][j] = number;
		number++;
		i++;
	}

	for (a = 0; a < n - 1; a++)
	{
		data[i][j] = number;
		number++;
		j++;
	}

	for (a = 0; a < n - 1; a++)
	{
		data[i][j] = number;
		number++;
		i--;
	}

	for (a = 0; a < n - 1; a++)
	{
		data[i][j] = number;
		number++;
		j--;
	}

	FULL(data,number,begin+1,n-2);

}






int main()
{
	int data[size][size] = {0};
	int number = 1, begin = 0;


	FULL(data,number,begin,size);

	for (int i=0;i<6;i++)
	{
		for (int j=0;j<6;j++)
		{
			printf("%2d ",data[i][j]);
		}
		printf("\n");
	}



	return 0;
}