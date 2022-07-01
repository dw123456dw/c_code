#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int Get_Num(char* a)
//{
//	int count = 1;
//	while (*a!='\0')
//	{
//		if (*a==' ')
//		{
//			count++;
//		}
//		a++;
//	}
//	return count;
//}
//
//int main()
//{
//
//	char a[50];
//	printf("请输入一串字符:\n");
//	gets(a);//i am a hero     4个单词
//	int ret= Get_Num(a);
//	printf("有%d个单词\n",ret);
//	return 0;
//}
void Del_Word(char arr[],char word)
{
	int i = 0;
	for (i = 0; i < 30; i++)
	{
		if (arr[i]==word)
		{
			arr[i] = 'x';
		}
	}
}
int main()
{
	char arr[30] = {0},word=0;
	printf("请输入字符串和要删除的字符:\n");
	scanf("%s %c",arr,&word);
	Del_Word(arr,word);//hhhhhhhccc  删除c
	printf("%s",arr);
	return 0;
}