#include <iostream>
#include <vector>
using namespace std;
#include <omp.h>
#define N 100

vector<vector<vector<int>>> arr(N, vector<vector<int>>(N, vector<int>(N)));
int main()
{
	int min = INT_MAX;
	int x=0, y=0, z = 0;
	int i = 1, j = 1, k = 1;
#pragma omp parallel for collapse(2) private(i,j,k)
	for (i=1;i<N;i++)
	{
		for (j=1;j<N;j++)
		{
			for (k=1;k<N;k++)
			{
				arr[i][j][k] = (3*i + 4*j - 2*k) / (i*j*k);
				if (arr[i][j][k]<min)
				{
					min = arr[i][j][k];
					x = i;
					y = j;
					z = k;
				}
			}
		}
	}
	cout << min << endl;
	cout << x << " " << y << " " << z;
	return 0;
}


//
//#include <iostream>
//#include <omp.h>
//
//int main()
//{
//#pragma omp parallel
//    {
//        int tid = omp_get_thread_num();
//        std::cout << "Hello from thread " << tid << std::endl;
//    }
//    return 0;
//}

//#include <iostream>
//#include <omp.h>
//
//int main()
//{
//    int i;
//#pragma omp parallel for
//    for (i = 0; i < 10; i++) {
//        int tid = omp_get_thread_num();
//        std::cout << "Hello from thread " << tid << ", iteration " << i << std::endl;
//    }
//    return 0;
//}




//int main() {
//	int tid, nthreads;
//	omp_set_num_threads(4);
//#pragma omp parallel private(tid,nthreads)
//	{
//	int nthreads;
//	tid = omp_get_thread_num();
//	nthreads = omp_get_num_threads();
//	printf("hello from thread %d in %d threads \n", tid, nthreads);
//#pragma omp master
//	if (tid == 0)
//	{
//		nthreads = omp_get_num_threads();
//		printf("there are %d threads to say hello \n", omp_get_num_threads());
//	} 
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<omp.h>
//
//int jiecheng(int m)
//{
//    int n = 1;
//    for (int i = 1; i <= m; i++)
//    {
//        n = n * i;
//    }
//    return (n);
//}
//
//int main()
//{
//    int tid;
//    omp_set_num_threads(2);
//    int sum = 0;
//
//#pragma omp parallel private(tid)
//    {
//#pragma omp sections nowait
//        {
//#pragma omp section
//            {
//                tid = omp_get_thread_num();
//                for (int i = 0; i <= 10; i++)
//                {
//                    sum += i;
//                }
//            }
//#pragma omp section
//            {
//                tid = omp_get_thread_num();
//                sum += 10 * jiecheng(10);
//                printf("sum=%d", sum);
//            }
//        }
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <omp.h>
//int main()
//{
//	int x = 0;
//	int i = 0;
//	int count = 0;  //统计运算的次数
//#pragma omp parallel for schedule(dynamic)
////#pragma omp parallel for schedule(static)
////#pragma omp parallel for schedule(guided)
//	for (x = 2; x < 100000; x++)    //在2到100000之间找质数
//	{
//		for (i = 2; i < x; i++)   //试除法，能不能被x整除，从2开始找，直到等于x
//		{
//			if (x % i == 0)   //找到能被x整除的数了
//			{
//				break;
//			}
//		}
//		if (x == i)   //找到和x相等也没有被整除的，证明是质数
//		{
//
//			count++;
//		}
//	}
//	printf("\n\n\n");
//	printf("素数：%d ", count);
//	return 0;
//}



//#include <iostream>
//using namespace std;
//#include <stdlib.h>
//#include <time.h>
//#include <omp.h>
//int A[10050];
//void test1()   //并
//{
//	clock_t start_time, end_time;
//	start_time = clock();
//	int ans = 0;
//#pragma omp parallel for
//	for (int i = 0;i < 10050;i++)
//	{
//		if (A[i] <= 0)
//		{
//			ans++;
//		}
//	}
//	end_time = clock();
//	cout << "并行计算小于0的个数：" << ans << endl;
//	printf("并行Time is=%f", (double)(end_time - start_time) / CLOCKS_PER_SEC);
//
//}
//void test2()    //串
//{
//	clock_t start_time, end_time;
//	start_time = clock();
//	int ans = 0;
//	for (int i = 0;i < 10050;i++)
//	{
//		if (A[i]<=0)
//		{
//			ans++;
//		}
//	}
//	end_time = clock();
//	cout << "串行计算小于0的个数：" << ans << endl;
//	printf("串行Time is=%f", (double)(end_time - start_time) / CLOCKS_PER_SEC);
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	for (int i=0;i<10050;i++)
//	{
//		A[i] = rand()%101-100;
//	}
//	int intput;
//	cin >> intput;
//	if (intput==1)
//	{
//		test1();
//	}
//	else if(intput==0)
//	{
//		test2();
//	}
//	else
//	{
//		cout << "输入有错";
//	}
//	return 0;
//}

