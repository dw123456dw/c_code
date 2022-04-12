#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
int main()
{
	char password[20] = {0};
	int a = 0;
	for (a = 0; a < 3; a++)
	{
		printf("请输入密码：");
		scanf("%s", &password);
		if (strcmp(password,"123456") == 0)//比较两个字符串是否相等应该用strcmp库函数，头文件用string，格式为strcmp（字符串名，字符串）== 0.
		{
			printf("输入正确");
			break;
		}
		else
		{
			printf("输入错误");
		}
	}
	if(a == 3)
		printf("输入超过三次退出程序");
	return 0;
}