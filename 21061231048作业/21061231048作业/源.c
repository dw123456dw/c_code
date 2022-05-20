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
//	int count2 = 0;//利用计数器实现
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
//	if (count1 >= 1)//只要有1个55就输出“有”
//	{
//		printf("有");
//	}
//	else if (count2 == 10)//当10个元素都没有55时count2为10
//	{
//		printf("没有");
//	}
//	return 0;
//}
int main()
{
    int arr[] = { 33,56,60,62,68,59,55,90,74,44 };//期望最大值为90，索引值为7
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
    printf("最大值是%d,索引值是%d\n",max,count);
    return 0;
}