#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//
//void main()
//{
//	int a = 12, b = 3;
//	float x = 18.5, y = 4.6;
//	printf("%d\n",(float)(a*b)/2);
//	printf("%d\n",(int)x%(int)y);
//}



//int main()
//{
//	int ret = 0, n = 100;
//	int i = 0;
//	printf("请输入一个三位数字:\n");
//	scanf("%d",&i);
//	if (i<0)
//	{
//		i = -i;
//		for (n=100;n>=1;n/=10)
//		{
//			if (i==1)
//			{
//				ret += 1;
//			}
//			else
//			{
//				ret += (i % 10) * n;
//			}
//			i /= 10;
//		}
//	}
//	else
//	{
//		for (n = 100; n >= 1; n /= 10)
//		{
//			if (i == 1)
//			{
//				ret += 1;
//			}
//			else
//			{
//				ret += (i % 10) * n;
//			}
//			i /= 10;
//		}
//	}
//	printf("%d",ret);
//	return 0;
//}

//void main()
//{
//	char c1 = 'a', c2 = 'b', c3 = 'c';
//	printf("a%cb%cc%c\n",c1,c2,c3);
//
//}

//void main()
//{
//	int a = 12, b = 15;
//	printf("a=%d%%,b=%d%%",a,b);
//}

//void main()
//{
//	long a, b;
//	float x, y;
//	scanf("%d,%d",&a,&b);
//	scanf("%f,%f",&x,&y);
//	printf("a=%d,b=%d\n",a,b);
//	printf("x=%lf,y=%lf\n",x,y);
//}

//void main()
//{
//	int a, b;
//	scanf("%2d%*2d%2d",&a,&b);
//	printf("%d,%d\n",a,b);
//}

//void main()
//{
//	char a, b;
//	int c;
//	scanf("%c%*c%c%*c%d",&a,&b,&c);
//	printf("\'%c\',\'%c'\,%d",a,b,c);
//}


//int main()
//{
//	int i, j, k;
//	i = 2;
//	j = 5;
//	k = ++i>= 3 || j++ <= 5;
//	printf("%d%d%d",i,j,k);
//
//	return 0;
//}

//int main()
//{
//	int i = 3, k = 5;
//	if (i++>3)
//	{
//		k++;
//	}
//	printf("%d%d",i,k);
//
//}

//int main()
//{
//	int i = 5, j = 6, k = 7;
//	switch (++i)
//	{
//	default:j++, k++;
//	case 5:j++, k++;
//
//	}
//	printf("%d%d%d",i,j,k);
//	return 0;
//}

//int main()
//{
//	int i,count=0;
//	for (i=1;i<10;i++)
//	{
//		count++;
//	}
//	printf("%d",count);
//	return 0;
//}

//int main()
//{
//	int j;
//	for (j=10;j>3;j--)
//	{
//		if (j % 3)j--;
//		--j; --j;
//		printf("%d",j);
//	}
//	return 0;
//}
//
//int main()
//{
//	int x, y, z, k;
//	x = (y = 4, z = 16, k = 32);
//	printf("%d",x);
//
//	return 0;
//}

//int main()
//{
//	char ch;
//	while ((ch=getchar())!='\n')
//	{
//		if (ch>='A'&&ch<='Z')
//		{
//			ch = ch + 32;
//		}
//		else if(ch>='a'&&ch<='z')
//		{
//			ch = ch - 32;
//		}
//	}
//	printf("%c",ch);
//	return 0;
//}

//int main()
//{
//	int y = 10;
//	do
//	{
//		y--;
//	} while (--y);
//	printf("%d",y--);
//	return 0;
//
//}
int main()
{
	int j,i, count;
	for (i=0,count=0;i<5;i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (j % 2==0)
			{
				continue;
			}
			count++;
		}
	}
	printf("%d",count);
	return 0;
}