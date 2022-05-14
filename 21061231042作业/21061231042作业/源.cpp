#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int str = 0;
	printf("欢迎进入选课系统，请输入学号：");
	scanf("%d",&str);
	if (str==1234)
	{
		printf("----欢迎开始选课----\n");
		int j = 0;
		printf("1->查询可选课程；\n");
		printf("2->开始选课；\n");
		printf("3->退出选课系统。\n");
		printf("请根据需求选择你的操作：\n");
		scanf("%d",&j);
		switch (j)
		{
		case 1:
		{
			printf("查询可选课程\n");
			break;
		}
		case 2:
		{
			printf("开始    选课\n");
			break;
		}
		case 3:
		{
			printf("退出\n");
			break;
		}
		default:
			printf("输入错误\n");
			break;
		}
	}
	else
	{
		printf("学号错误\n");
	}
	return 0;
}

