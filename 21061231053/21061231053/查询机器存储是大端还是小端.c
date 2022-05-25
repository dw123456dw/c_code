#include <stdio.h>

int check_big(char* a)
{
	return *a;
}
int main()
{
	int i = 1;
	char* p = (char*)&i;
	int ret= check_big(p);//1大端，0小端
	if (ret == 1)
	{
		printf("本机器是大端模式");
	}
	else
	{
		printf("本机器是小端模式");
	}
	return 0;
}