#include <stdio.h>


int main()
{

	int a, b, c, flag = 0;
	for (a=1;a<=9;a++)
	{
		for (b=2;b<=9;b++)
		{
			for (c=0;c<=9;c++)
			{
				int temp1 = a * 100 + b * 10 + b;
				int temp2 = a * 1000 + c * 100 + b * 10 + c;
				if (temp1*b == temp2)
				{
					printf("a=%d,b=%d,c=%d\n",a,b,c);
					flag = 1;
				}
			}

		}

	}
	if (flag==0)
	{
		printf("нч╫Б\n");
	}
	return 0;
}