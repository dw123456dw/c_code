#include <iostream>
using namespace std;
#include <time.h>
#include <stdio.h>
#include <omp.h>
//int check(int n)
//{
//	int sum = 1;
//	for (int i=1;i<=n;i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}

//void test1()
//{
//	long long ans = 0;
//	clock_t start_time, end_time;
//	start_time = clock();
//	for (int i = 1; i <= 10; i++)
//	{
//		ans += (i + check(10));
//	}
//	end_time = clock();
//	printf("串行时间是： %f\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);
//	cout << "串行累加结果是： " << ans << endl;
//	int j = 0;
//	ans = 0;
//	omp_set_num_threads(2);
//	start_time = clock();
//#pragma omp parallel private(j)
//	{
//#pragma omp sections nowait
//		{
//#pragma omp section
//			{
//				for (int i = 1; i <= 10; i++)
//				{
//					ans += i;
//				}
//			}
//#pragma omp section
//			{
//				for (int i = 1; i <= 10; i++)
//				{
//					ans += check(10);
//				}
//			}
//		}
//	}
//	end_time = clock();
//	printf("并行时间是： %f\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);
//	cout << "并行累加结果是： " << ans;
//}
//void test2()
//{
//	clock_t start_time, end_time;
//	int i, j, tid, nthreads;
//	const int n = 3;
//	int a[n][n], b[n][n], c[n][n];
//	omp_set_num_threads(3);
//	printf("nthreads tid  i   j   c[i][j]\n");
//	start_time = clock();
//#pragma omp parallel for private(i,j)
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			a[i][j] = (i + 1) + (j + 1);
//			b[i][j] = (i + j + 2) * 10;
//			c[i][j] = a[i][j] + b[i][j];
//			tid = omp_get_thread_num();
//			nthreads = omp_get_num_threads();
//			printf("%8d   %d   %d   %d   %d\n", nthreads, tid, i, j, c[i][j]);
//		}
//		cout << "----------------------------" << endl;
//	}
//	end_time = clock();
//	printf("外层并行循环时间是： %f\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);
//}
//void test3()
//{
//	clock_t start_time, end_time;
//	int i, j, tid, nthreads;
//	const int n = 10;
//	int a[n][n], b[n][n], c[n][n];
//	omp_set_num_threads(3);
//	start_time = clock();
//	printf("nthreads tid  i   j   c[i][j]\n");
//	for (int i = 0; i < n; i++)
//	{
//#pragma omp parallel for
//			for (int j = 0; j < n; j++)
//			{
//				a[i][j] = (i + 1) + (j + 1);
//				b[i][j] = (i + j + 2) * 10;
//				c[i][j] = a[i][j] + b[i][j];
//				tid = omp_get_thread_num();
//				nthreads = omp_get_num_threads();
//				printf("%8d   %d   %d   %d   %d\n", nthreads, tid, i, j, c[i][j]);
//			}
//		cout << "----------------------------" << endl;
//	}
//	end_time = clock();
//	printf("内层循环并行时间是： %f\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);
//}
void test4()
{
	clock_t start_time, end_time;
	int i, j, tid, nthreads;
	const int n = 10;
	int a[n][n], b[n][n], c[n][n];
	omp_set_num_threads(3);
	start_time = clock();
	printf("nthreads tid  i   j   c[i][j]\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = (i + 1) + (j + 1);
			b[i][j] = (i + j + 2) * 10;
			c[i][j] = a[i][j] + b[i][j];
			tid = omp_get_thread_num();
			nthreads = omp_get_num_threads();
			printf("%8d   %d   %d   %d   %d\n", nthreads, tid, i, j, c[i][j]);
		}
		cout << "----------------------------" << endl;
	}
	end_time = clock();
	printf("串行时间是： %f\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);
}

int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}