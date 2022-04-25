#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数：\n");
	scanf("%d%d",&a,&b);
	int max = get_max(a, b);
	printf("max = %d",max);
	return 0;
}