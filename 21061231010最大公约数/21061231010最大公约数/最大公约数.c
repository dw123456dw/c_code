#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int r = 0;
	printf("请输入两个数：");
	scanf("%d%d",&m,&n);
	while (r = m % n)//辗转相除法//不会
	{
		m = n;
		n = r;
	}
	printf("最大公约数是%d",n);

	return 0;
}