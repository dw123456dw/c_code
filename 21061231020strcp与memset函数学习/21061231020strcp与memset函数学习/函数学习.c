#include <stdio.h>
//strcpy
//int main()
//{
//	char arr1[] = {"hhh"};
//	char arr2[20] = {"##############"};
//	strcpy(arr2, arr1);//左边放目标，右边放原字符串。
//	printf("%s\n",arr2);//注意：此时arr2只打印hhh，因为strcpy函数会把原字符串结尾的\0也复制。
//	return 0;
//}

int main()
{
	char arr[] = {"hello world"};
	memset(arr,'#',5);//左边为目标，中间为要代替的东西，右边为代替的个数。
	printf("%s\n",arr);
	return 0;
}