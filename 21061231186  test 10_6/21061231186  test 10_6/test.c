#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void test()
{
	int Five, Six, num, sum = 0, day = 0;
	scanf("%d%d%d", &Five, &Six, &num);

	while (sum <= num)
	{
		for (int i = 0; i < 5; i++)
		{
			if (sum < num)
			{
				sum += Five;
				day++;
			}

		}
		for (int i = 0; i < 2; i++)
		{
			if (sum < num)
			{
				sum += Six;
				day++;
			}
		}
	}

	printf("%d\n", day);
}





int main()
{
	//10  20   99
	//test();
	return 0;
}