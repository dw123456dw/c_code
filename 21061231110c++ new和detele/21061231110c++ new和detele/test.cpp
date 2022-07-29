#pragma once
#include <iostream>
using namespace std;

int* func()
{
	int* p = new int[10];
	return p;
}



void test1()
{
	int* arr = func();

	for (int i=0;i<10;i++)
	{
		arr[i] = i + 100;
	}

	for (int i=0;i<10;i++)
	{
		cout << arr[i] << endl;
	}
	delete[]arr;
}





int main()
{
	test1();


	system("pause");
	return 0;
}