#include <stdio.h>
void add(int* p)
{
	(*p)++;//��������ŷ���++������p��
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