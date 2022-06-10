#include <stdio.h>
#include <assert.h>
int my_strcmp(const char* p1,const char* p2)
{
	assert(p1);
	assert(p2);
	while (*p1==*p2)
	{
		if (*p1=='\0')
		{
			return 0;
		}
		p1++;
		p2++;
	}
	return *p1 - *p2;
}
int main()
{
	const char* p1 = "abcde";
	const char* p2 = "abcdg";
	int ret=my_strcmp(p1,p2);
	printf("%d",ret);
	return 0;
}

