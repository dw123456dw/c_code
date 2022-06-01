#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
void rev_sort(char* str)
{
	assert(str);
	int len = strlen(str);
	char* left = str;
	char* right =str+len-1;
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()//º¯ÊýÄæÐò×Ö·û´®
{
	char arr[256] = {0};
	//scanf("%s",arr);
	gets(arr);
	rev_sort(arr);
	printf("%s", arr);
	return 0;
}