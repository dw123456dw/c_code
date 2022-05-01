#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = add(a, b);
	printf("%d\n",sum);
	return 0;
}