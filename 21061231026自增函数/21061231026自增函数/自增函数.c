#include <stdio.h>
void add(int* p)
{
	(*p)++;//必须加括号否则++作用在p上
}
int main()
{
	int sum = 0;
	add(&sum);
	printf("sum =%d\n",sum);
	add(&sum);
	printf("sum =%d\n", sum);
	add(&sum);
	printf("sum =%d\n", sum);
	return 0;
}