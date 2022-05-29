#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add(int x,int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void hanshu(int(*x)(int,int))
{
	int j = 0, k = 0;
	printf("请输入两个操作数:\n");
	scanf("%d%d", &j, &k);
	printf("%d \n", (*x)(j,k) );
}
void menu()
{
	printf("#### 1.add  2.sub #####\n");
	printf("#### 3.mul  4.div #####\n");
	printf("####      0.exit   ####\n");
}
void test()
{
	int i = 0;
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d",&i);
		switch (i)
		{
		case 1:
		{
			hanshu(add);
			break;
		}
		case 2:
		{
			hanshu(sub);
			break;
		}
		case 3:
		{
			hanshu(mul);
			break;
		}
		case 4:
		{
			hanshu(div);
			break;
		}
		case 0:
		{
			printf("退出计算器\n");
			break;
		}
		default :
		{
			printf("输入错误\n");
		}
		}

	} while (i);
}
int main()
{
	test();
	return 0;
}