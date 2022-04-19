#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//º∆À„1/1-1/2+1/3-1/4......1/100
int main()
{
	double sum = 0.0;
	int i = 0;
	double b = 0.0;
	int flag = 1;
	for (i = 1;i <= 100;i++)
	{
		b = flag*1.0 / i;
		sum = sum + b;
		flag = -flag;
	}
	printf("%lf ",sum);
	return 0;
}