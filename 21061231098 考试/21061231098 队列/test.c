#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//double nums(double x1, double x2, double y1, double y2)
//{
//	double a, b;
//	double c;
//	a = x2 - x1;
//	b = y2 - y1;
//	c = sqrt(a*a+b*b);
//	return c;
//}
//
//int main()
//{
//	double x1, x2, y1,y2;
//	double c;
//	scanf("%lf %lf %lf %lf",&x1,&x2,&y1,&y2);
//	c = nums(x1,x2,y1,y2);
//	printf("距离为%.2f ",c);
//	return 0;
//}


//
//int main()
//{
//	int i=5, b=0;
//	for (i = 5; i <= 10000; i+=5)
//	{
//		b += i;
//	}
//	printf("%d ",b);
//	return 0;
//}

//int main()
//{
//	int i, j;
//	for (i=1;i<=50;i++)
//	{
//		for (j=1;j<=50;j++)
//		{
//			if (i*50+j*60==2800 && i+j==50)
//			{
//				printf("西餐：%d,中餐:%d\n",i,j);
//			}
//		}
//	}
//
//
//	return 0;
//}



//int main()
//{
//	int time,money;
//	printf("请输入工作时间\n");
//	scanf("%d",&time);
//	if (time<=40 && time>0)
//	{
//		money = time * 30;
//	}
//	else if (time>40)
//	{
//		money = 40 * 30 + (time - 40) * 50;
//	}
//
//	printf("工资为:%d\n",money);
//
//	return 0;
//}


//double calculate(double x,double y)
//{
//	double num,div;
//	x = 1 / x;
//	y = 1 / y;
//	div = (x + y) / 2;
//	num = 1 / div;
//	return num;
//}
//
//int main()
//{
//	double x, y, num;
//	printf("input two doubles:\n");
//	scanf("%lf %lf",&x,&y);
//	num = calculate(x, y);
//	printf("1/(1/x+1/y)/2=%.3f",num);
//
//	return 0;
//}


//struct pressinfo
//{
//	char press[20];
//	char add[20];
//	int age;
//};
//
//struct book
//{
//	char name[20];
//	char writer[20];
//	struct pressinfo;
//};
//
//int main()
//{
//	struct book s = { "hello world","dw",{"beijinchuban","beijin",2002} };
//	return 0;
//}


//int main()
//{
//	float r=5.3,pi=3.14159;
//	float area, circumference;
//	area = (pi * r * r) / 2;
//	circumference = pi * r;
//	printf("area=%4f,circumference=%4f\n",area,circumference);
//	return 0;
//}

int main()
{
    int i;
    float x,a[] = { 1.72,1.88,1.69 };
    for (i = 0; i < 3; i++)
    {
        x = a[i] * 0.618;
        printf("x[%d]=%.3f\n", i, x);
    }
}