#include <stdio.h>
//int main()
//{
//	int arr[] = {33,56,60,62,68,59,54,90,74,44};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] < 60)
//		{
//			printf("%d\n",arr[i]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 33,56,60,62,68,59,55,90,74,44 };
//	int i=0;
//	int count1 = 0;
//	int count2 = 0;//���ü�����ʵ��
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == 55)
//		{
//			count1++;
//		}
//		else
//		{
//			count2++;
//		}
//	}
//	if (count1 >= 1)//ֻҪ��1��55��������С�
//	{
//		printf("��");
//	}
//	else if (count2 == 10)//��10��Ԫ�ض�û��55ʱcount2Ϊ10
//	{
//		printf("û��");
//	}
//	return 0;
//}
int main()
{
    int arr[] = { 33,56,60,62,68,59,55,90,74,44 };//�������ֵΪ90������ֵΪ7
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    int max = 0;
    int count = 1;
    for (i = 0; i < sz; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            count++;
        }
    }
    printf("���ֵ��%d,����ֵ��%d\n",max,count);
    return 0;
}