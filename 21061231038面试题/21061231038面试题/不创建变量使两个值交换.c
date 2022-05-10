#include <stdio.h>
int main()
{
	int a = 5;
	int b = 3;
	printf("换之前a=%d,b=%d\n",a,b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("换之后a=%d,b=%d\n",a,b);
	return 0;
}//有缺陷，当a，b都特别大时a=a+b会出现二进制不够存放的问题,下面更好的解决该问题


/*a = a ^ b;
b = a ^ b;
a = a ^ b;*/
