#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	printf("请输入想要循环计算的值,和循环次数\n");//计算2+22+222+2222+22222=24690
	scanf("%d%d",&a,&n);
	int i = 0;
	int ret = 0;
	int j = a;
	for (i = 0; i < n; i++)
	{
		ret += a;
		a =  j + a * 10;
	}
	printf("%d",ret);

}