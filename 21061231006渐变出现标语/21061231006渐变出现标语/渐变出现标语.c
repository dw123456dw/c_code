#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "I am the king of school!!!";
	char arr2[] = "##########################";

	int left = 0;//是下标
	int right = strlen(arr1) - 1;//是下标
	while(left<=right)//当两个下标相交且错开时，打印结束。
	{
		arr2[left] = arr1[left];//用2的下标代替一的下标达到渐变的效果。
		arr2[right] = arr1[right];//同上一个注释
		left++;
		right--;
		printf("%s\n",arr2);
	}
}