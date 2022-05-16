#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int j =0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (i > j)//
//			{
//				printf("*");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}


int main()
{
	int i = 0;//行
	int j = 0;//列
	for (i = 1; i <=9; i++)
	{
		for (j = 1; j <=i; j++)
		{
			printf("%d*%d=%d ", j, i, i * j);
		}
		printf("\n");
	}
	return 0;

}

//冒泡排序(升序)

//void buble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		//控制循环趟数
//		for (j = 0; j < sz-1-i; j++)//循环一趟
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = {10,9,8,7,6,5,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	buble_sort(arr,sz);//排序
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//}
//void reserve(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);;
//	//init(arr,sz);
//	print(arr, sz);
//	reserve(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//void swap(int  arr1[], int arr2[],int sz)
//{
//	int i = 0;
//	//int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//}
//
//int main()
//{
//	int i = 0;
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10};
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	swap(arr1,arr2,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr1[i]);
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr2[i]);
//	}
//}


//int main()
//{
//	int count = 0;
//	char input= 0;
//	//48-57  37,42,43,45,61,47
//	printf("请输入任意字符：");
//	scanf("%c", &input);
//	while(input!='\\')
//	{
//		if (input >= 48 && input <= 57)
//		{
//			count++;
//		}
//		else if (input == 37 || input == 42 || input == 43 || input == 45 || input == 47 || input == 61)
//		{
//			printf("第二类字符\n");
//			count++;
//			printf("count=%d", count);
//		}
//		else
//		{
//			printf("其他字符\n");
//			count++;
//			printf("count=%d", count);
//		}
//	
//	}
//	if(input=='\\')
//	{
//		printf("count=%d",count);
//		printf("退出");
//	}
//
//	return 0;
//}
//int main()
//{
//	int count1 = 0, count2 = 0, count3 = 0;
//	while(1)
//	{
//		char input = 0;
//		printf("请输入字符\n");
//		scanf("%c", &input);
//		getchar();
//		if (input == '\\')
//		{
//			count3++;
//			break;
//		}
//		if (input >= 48 && input <= 57)
//		{
//			count1++;
//		}
//		else if (input == 37 || input == 42 || input == 43 || input == 45 || input == 47 || input == 61)
//		{
//			count2++;
//		}
//		else
//		{
//			count3++;
//		}
//
//	}
//	printf("第一类字符=%d\n", count1);
//	printf("第二类字符=%d\n", count2);
//	printf("其它字符=%d\n", count3);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d",arr[i]);
//	}
//	return 0;
//}