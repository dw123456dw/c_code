#include <stdio.h>
#include <assert.h>
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2);
	char* s1 = (char*)p1;
	char* s2 = (char*)p2;
	char* cur =(char*) p1;//记录开始比较的位置
	if (*p2=='\0')
	{
		return (char*)p1;
	}
	while (*cur)
	{
		s1 = cur;//不在用p1，p2用拷贝s1，s2不能改变p1，p2
		s2 = (char*)p2;
		while((*s1!='\0')&& (* s1 == *s2)&&(*s1!='\0'))
		{
			s1++;
			s2++;
		}
		if (*s2=='\0')
		{
			return cur;//找到字串
		}
		cur++;
	}
	return NULL;//找不到


}
int main()
{
	const char* p1 = "abbbcdef";
	const char* p2 = "bbc";
	char* ret=my_strstr(p1,p2);
	if (ret == NULL)
	{
		printf("找不到");
	}
	else
	{
		printf("%s",ret) ;
	}
	return 0;
}