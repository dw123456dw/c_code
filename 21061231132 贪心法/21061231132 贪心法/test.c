#include <stdio.h>

int GET(int A,int B)
{
	int R;
	while (A % B)
	{
		R = A % B;
		A = B;
		B = R;
	}
	return R;
}


void EgyptFraction(A, B)
{
	int E = 0,R = 0;
	E = B / A + 1;
	printf("1/%d\n",E);

	A = A * E - B;
	B = B * E;

	R = GET(A,B);


	if (R!=1)
	{
		A = A / R;
		B = B / R;
	}

	if (A==1)
	{
		printf("1/%d\n",B);
		return;
	}

	EgyptFraction(A,B);
}

int main()
{
	int A=7, B=8;


	EgyptFraction(A,B);



	return 0;
}