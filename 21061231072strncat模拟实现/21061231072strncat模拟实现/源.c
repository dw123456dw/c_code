#include <stdio.h>
#include <assert.h>

char* my_strncat(char* p1,char* p2,int sz)
{
	char* ret = p1;
	while (*p1)
	{
		p1++;
	}
	while (*p2!='\0'&&sz!=0)
	{
		*p1 = *p2;
		p1++;
		p2++;
		sz--;
	}
	if (*p2 == '\0'||sz==0)
	{
		*p1 = '\0';
	}
	return ret;
}
int main()
{
	char arr1[30] = "abcdef\0xxxxxxxxxxxxxxx";
	char arr2[] = "bit";
	my_strncat(arr1,arr2,2);//多的只换一个\0

	printf("%s",arr1);
	return 0;
}
