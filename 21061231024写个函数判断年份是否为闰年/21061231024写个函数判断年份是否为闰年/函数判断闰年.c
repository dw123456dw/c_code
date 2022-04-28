#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int leap_year(int x)
{
	if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
		return 1;
	else
		return 0;

}
int main()
{
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (1==leap_year(i))
		{
			printf("%d  ",i);
		}
	}
	return 0;
}