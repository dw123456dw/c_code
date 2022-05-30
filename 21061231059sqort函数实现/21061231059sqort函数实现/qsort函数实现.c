#include <stdio.h>
void swap(char* pf1,char* pf2,int width)//实现数据交换
{
	int i = 0;
	for (i = 0;i < width;i++)
	{
		char tmp = *pf1;
		*pf1 = *pf2;
		*pf2 = tmp;
		pf1++;
		pf2++;
	}
}
void bubble_sort(void* base,int sz,int width,int(*cmp)(void* e1,void* e2))//用void，因为不知道用户要排序的大小
{
	int i = 0;
	for (i = 0;i < sz - 1;i++)
	{
		int j = 0;
		for (j = 0;j < sz - 1 - i;j++)
		{
			//传width用来指向字节，因为不知道要改变多少字节
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
int cmp_int(const void*e1,const void* e2)//比较方法，返回大于小于或等于0的值。
{
	return *(int*)e1-*(int*)e2;
}
int main()
{
	int arr[] = {5,3,6,4,1,2,9};
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);//冒泡排序主体不变，参数和qsort一样，如果要比较其他数据类型，把比较方法换了。
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}