#include <stdio.h>
#include <unistd.h>


int main()
{
	alarm(1);
	int i;
	for(i=0;;i++)
	{
		printf("%d\n",i);
	}

	return 0;
}
