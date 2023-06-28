#include <stdio.h>
#include <signal.h>

void sig_cath(int signo)
{
	printf("catch you!! %d\n",signo);
}


int main()
{
	signal(SIGINT,sig_cath);
	while(1);
	
	return 0;
}




