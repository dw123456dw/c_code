#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char intput[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("���Խ���60���ػ����룺������ȡ��\n");
	scanf("%s",&intput);
	if (strcmp(intput, "������" == 0))
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

	return 0;
}