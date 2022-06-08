#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
//void zuoxuan(char* arr,int k)//暴力求解
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0;i < k; i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0;j < len - 1;j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}

void reverse(char* left,char* right)
{
	assert(left);
	assert(right);
	while (left<right)
	{
		char tmp = 0;
		tmp = *(left);
		*(left) = *(right);
		*(right) = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr,int k)
{
	assert(arr);
	int len = strlen(arr);
	reverse(arr,arr+k-1);//逆序左边
	reverse(arr+k,arr+len-1);//逆序右边
	reverse(arr,arr+len-1);//整体逆序
}
int main()
{
	char arr[] = "abcdef";
	//zuoxuan(arr,k);
	left_move(arr,2);//三步翻转法
	printf("%s",arr);
	return 0;
}