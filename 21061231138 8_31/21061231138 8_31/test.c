#include <stdio.h>


#define N 5


//int main()
//{
//	int count = 0, m = 3, a[N], i,sum = 0;
//
//	for (i=0;i<N;i++)   //初始化人
//	{
//		a[i] = 1;
//	}
//	i = -1;
//
//
//	while (count<N)
//	{
//		i++;
//		sum += a[i];
//
//		if (sum==m)
//		{
//			count++;
//
//			a[i] = 0;
//			sum = 0;
//			printf("%4d ",i+1);
//			i = -1;
//		}
//		if (i==N-1)
//		{
//			i = -1;
//		}
//	}
//	return 0;
//}


int getsize(int data[])     //数组作为参数传入并用数组接收会退化成同类型的指针
{
	return sizeof(data);    //因此返回了4

}


int main()
{
	int arr1[] = {1,2,3,4,5};
	int size1 = sizeof(arr1);
	int* arr2 = arr1;             //因为声明的是指针因此sizeof为4
    
	int size2 = sizeof(arr2);
	int size3 = getsize(arr1);


	printf("%d  %d  %d ",size1,size2,size3);   //调试可看出细节

	return 0;
}