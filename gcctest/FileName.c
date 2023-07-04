#include <stdio.h>
#include <omp.h>
#include <time.h>
long long fib(int n)
{
	if (n<2)
	{
		return n;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
long long fib1(int n)
{
	int fib_result;
	int i, j;
	if (n<2)
	{
		fib_result = n;
	}
	else
	{
#pragma omp task shared(i) firstprivate(n)
		i = fib1(n-1);
#pragma omp task shared(j) firstprivate(n)
		j = fib1(n-2);
#pragma omp taskwait
		fib_result = i + j;
	}
	return fib_result;
}

int main()
{
	clock_t start_time,end_time;
	start_time=clock();
	printf(" fib1(40)%lld\n",fib1(40));
	end_time=clock();
	printf("time=%.6lf\n",(double)(end_time - start_time) / CLOCKS_PER_SEC);
	return 0;
}
