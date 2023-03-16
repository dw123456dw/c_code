#include<stdio.h>
#include<omp.h>
int x;
#pragma omp threadprivate(x)
intmain() {
	int tid;
	x = 10;
	omp_set_num_threads(3);
	#pragma omp parallel
	{
		tid = omp_get_thread_num();
		printf("tid=%d,x=%d\n",tid,x);
		x = x + 1;
		printf("tid=%d,x=%dchenged\n",tid,x);
	}
	printf("afterparallel1st");
	printf("x=%d\n", x);
	printf("-----2nd-----\n");
	omp_set_num_threads(3);
	#pragma omp parallel
	{
		tid = omp_get_thread_num();
		printf("tid=%d,x=%d",tid,x);
		x = x + 1;
		printf("tid=%d,x=%dchanged\n",tid,x);
	}
	printf("afterparallel2nd\n");
	printf("x=%d\n", x);
}