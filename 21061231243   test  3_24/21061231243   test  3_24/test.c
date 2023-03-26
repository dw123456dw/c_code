#include <stdio.h>
#include <omp.h>


//int main()
//{
//	int nthreads_set, nthreads, tid;
//	nthreads_set = 80;
//
//	omp_set_dynamic(1);
//	omp_set_num_threads(nthreads_set);
//	printf("set_number_threads=%d\n",nthreads_set);
//	printf("dynamic region (1 or 0): %d\n",omp_get_dynamic());
//	printf("\n");
//
//#pragma omp parallel private (tid,nthreads)
//	{
//		nthreads = omp_get_num_threads();
//		tid = omp_get_thread_num();
//		printf("number of threads=%d  ",nthreads);
//		printf("tid = %d\n",tid);
//		printf("----------------\n");
//	}
//
//	return 0;
//}

int main()
{
	int n = 10;

	double sum = 0.0;
	int x = 1;


	return 0;
}