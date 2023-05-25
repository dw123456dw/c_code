#include <iostream>
using namespace std;
#include <omp.h>

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

int main()
{
	long long dp[130] = {0};
	dp[1] = 1;
	dp[2] = 1;

	for (int i=3;i<=128;i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	cout << dp[50];
	return 0;
}