#include <stdio.h>
#include <omp.h>



int main()
{
	int tid, i, j, a[10], b[10];
	omp_set_num_threads(3);

	for (i=0;i<4;i++)
	{
		a[i] = -10;
		b[i] = -10;
	}

	tid = omp_get_thread_num();
	for (i=0;i<4;i++)
	{
		printf("a[%d] = %d  ",i,a[i]);
	}
	printf("thread %d\n",tid);


	printf("----------------\n");


#pragma omp parallel for private(i,j,tid),firstprivate(a,b),lastprivate(b)
	for (i=0;i<4;i++)
	{
		tid = omp_get_thread_num();
		printf("a[%d]=%d  b[%d]=%d  thread %d\n",i,a[i],i,b[i],tid);

		a[i] = (i + 1) * 3 + tid;
		b[i] = (i + 1) * 7 + tid;

		printf("a[%d]=%d  b[%d]=%d  thread %d  changed\n", i, a[i], i, b[i], tid);
	}

	return 0;
}