#include <stdio.h>
void swap(char* pf1,char* pf2,int width)//ʵ�����ݽ���
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
void bubble_sort(void* base,int sz,int width,int(*cmp)(void* e1,void* e2))//��void����Ϊ��֪���û�Ҫ����Ĵ�С
{
	int i = 0;
	for (i = 0;i < sz - 1;i++)
	{
		int j = 0;
		for (j = 0;j < sz - 1 - i;j++)
		{
			//��width����ָ���ֽڣ���Ϊ��֪��Ҫ�ı�����ֽ�
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
int cmp_int(const void*e1,const void* e2)//�ȽϷ��������ش���С�ڻ����0��ֵ��
{
	return *(int*)e1-*(int*)e2;
}
int main()
{
	int arr[] = {5,3,6,4,1,2,9};
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);//ð���������岻�䣬������qsortһ�������Ҫ�Ƚ������������ͣ��ѱȽϷ������ˡ�
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}