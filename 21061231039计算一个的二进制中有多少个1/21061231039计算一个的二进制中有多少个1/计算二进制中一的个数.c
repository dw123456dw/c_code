#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int count = 0;
	int num = 0;
	scanf("%d",&num);
	int a = 0;
	for (a = 0; a < 32; a++)
	{
		if (1 == ((num >> a) & 1))
		{
			count++;
		}
	}
	printf("1µÄ¸öÊý%d", count);
	return 0;
}