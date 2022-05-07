#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 1, b = 1, c = 1;
	int i = 0;
	scanf("%d ", &i);
	while (i > 2)
	{
		c = a + b;
		a = b;
		b = c;
		i--;
	}
	printf("%d\n", c);
	return 0;
}