#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

//int main()
//{
//	int* p = (int*)malloc(40);//int *p=(int *)calloc(10,sizeof(int))    calloc��ѿ��ٵĿռ��Ϊ0
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
//	p = NULL;//free�ͷź�p�������ҵ����ٵĿռ䣬�����ֶ���ֵ��ָ��
//	return 0;
//}

int main()
{
	int* p = (int*)malloc(20);//int *p=(int *)calloc(10,sizeof(int))    calloc��ѿ��ٵĿռ��Ϊ0
	int* p1=realloc(p,40);//��չ�ڴ�
	if (p1 != NULL)
	{
		p = p1;//����ָ�븳����ָ�룬��ʹ��
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
	p = NULL;//free�ͷź�p�������ҵ����ٵĿռ䣬�����ֶ���ֵ��ָ��
	return 0;
}