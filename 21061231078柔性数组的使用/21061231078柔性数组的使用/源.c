#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//struct S
//{
//	int i;
//	int arr[0];//��������
//};
//int main()
//{
//	struct S* ps =(struct S*)malloc(sizeof(struct S)+10*sizeof(int));//��S���ٿռ䣬iռ4�ֽڣ�ʣ�µĹ���������,�����ڴ�������һ��
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
	int* arr;//��������
}s;
int main()
{
	struct S* ps=(struct S*)malloc(sizeof(struct S));//��S���ٿռ䣬iռ4�ֽڣ�ʣ�µĹ���������,�����ڴ治��һ��
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