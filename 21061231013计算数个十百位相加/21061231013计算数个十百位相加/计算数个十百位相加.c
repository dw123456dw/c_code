#include <stdio.h>
int main()
{
	int sum = 0;
	int a = 153;
	int b, c, d = 0;//�ֱ�Ÿ�ʮ��λ
	b = a % 10;
	c = a / 10 % 10;
	d = a / 100;
	sum = b + c + d;
	printf("b=%d,c=%d,d=%d,sum=%d",b,c,d,sum);
	return 0;
}