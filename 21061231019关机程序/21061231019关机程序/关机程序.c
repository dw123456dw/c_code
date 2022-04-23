#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char intput[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("电脑将在60秒后关机输入：我是猪取消\n");
	scanf("%s",&intput);
	if (strcmp(intput, "我是猪" == 0))
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

	return 0;
}