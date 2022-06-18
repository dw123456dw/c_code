#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//struct S
//{
//	int i;
//	int arr[0];//柔性数组
//};
//int main()
//{
//	struct S* ps =(struct S*)malloc(sizeof(struct S)+10*sizeof(int));//给S开辟空间，i占4字节，剩下的归柔性数组,两者内存连接在一起
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		if(ps!=NULL)
//		{
//			ps->arr[i] = i;
//		}
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}
struct S
{
	int i;
	int* arr;//柔性数组
}s;
int main()
{
	struct S* ps=(struct S*)malloc(sizeof(struct S));//给S开辟空间，i占4字节，剩下的归柔性数组,两者内存不在一起
	int i = 0;
	ps->i = 100; 
	ps->arr=(int*)malloc(10*sizeof(int));
	if (ps->arr != NULL)
	{
		for (i = 0;i < 10;i++)
		{
			ps->arr[i] = i;
		}
	}
	for (i = 0;i < 10;i++)
	{
		printf("%d ", ps->arr[i]);
	}
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;

	return 0;
}