#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fac2(int x)
{
	if (x >1)
	{
		return x * fac2(x - 1);
	}
	if (x <= 1)
		return 1;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	fac2(n);
	int ret = fac2(n);
	printf("nµÄ½×³ËÊÇ%d", ret);
	return 0;
}