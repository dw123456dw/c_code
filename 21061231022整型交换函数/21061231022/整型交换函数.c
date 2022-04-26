#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exchange(int* pa,int* pb)//使用解引用操作完成函数功能。
{
	int tem = 0;
	tem = *pa;
	*pa = *pb;
	*pb = tem;
}



int main()
{
	int a = 10;
	int b = 20;
	printf("a =%d,b =%d\n",a,b);
	exchange(&a,&b);//把a，b的地址传到函数
	printf("a =%d,b =%d\n",a,b);
	return 0;
}
//该函数功能只能用指针来完成。