#include <stdio.h>
#include <string.h>
//char max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//
//int main()
//{
//	int x = 0x4142, y = 0x4344;
//	printf("%c\n",max(x,y));
//	return 0;
//}
//int a = 5, b = 50;
//
//int max(int a, int b)
//{
//	return a < b ? a : b;
//}
//
//
//void main()
//{
//	int a = 10, b = 100;
//	printf("%d",max(a,b));
//
//}

//int func(int n)
//{
//	int i = 0;
//	i += n;
//	return i;
//}
//void main()
//{
//	int i, ret;
//	for (i=1;i<=5;i++)
//		ret = func(i);
//	printf("%d",ret);
//
//}


//int main()
//{
//	int a, b, * pa = &a, * pb = &b;
//	a = 10;
//	b = 100;
//	a = *pb;
//	*pb = *pa;
//	*pa = a;
//	printf("%d%d",*pa,*pb);
//
//	return 0;
//}

//void main()
//{
//	int x = 9, * p = &x;
//	printf("%d",x--);
//	printf("%d", (*p)--);
//	printf("%d", *p);
//
//
//}

//int main()
//{
//	char ch[] = "Chi\0na";
//	int ret = strlen(ch);
//	printf("%d",ret);
//	return 0;
//}


int main()
{

	char ch[] = "China", * pch = ch;
	pch++;
	printf("ch1=%s\npch1=%s\n",ch,pch);
	++* pch;
	printf("ch2=%s\npch2=%s",ch,pch);
	return 0;
}