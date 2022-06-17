#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

//int main()
//{
//	int* p = (int*)malloc(40);//int *p=(int *)calloc(10,sizeof(int))    calloc会把开辟的空间改为0
//	if (p == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i <10 ; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ",*(p+i));
//		}
//	}
//	free(p);
//	p = NULL;//free释放后p依旧能找到开辟的空间，所以手动赋值空指针
//	return 0;
//}

int main()
{
	int* p = (int*)malloc(20);//int *p=(int *)calloc(10,sizeof(int))    calloc会把开辟的空间改为0
	int* p1=realloc(p,40);//扩展内存
	if (p1 != NULL)
	{
		p = p1;//把新指针赋给旧指针，再使用
		int i = 0;
		for (i = 0; i <10 ; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ",*(p+i));
		}
	}
	free(p);
	p = NULL;//free释放后p依旧能找到开辟的空间，所以手动赋值空指针
	return 0;
}