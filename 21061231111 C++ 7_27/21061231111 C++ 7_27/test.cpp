#pragma once
#include <iostream>
using namespace std;


//int main()
//{
//	int a = 10;
//	int& b = a;
//	int c = 30;
//
//	b = 20;
//
//
//
//
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	cout << "c= " << c << endl;
// 
//
//	system("pause");
//	return 0;
//}


void Swap(int &a , int &b)
{
	int temp = a;
	a = b;
	b = temp;
}


int test1()
{
	static int c = 10;
	return c;
}

void test2(const int &b)
{
	cout << "b= " << b << endl;
}

void func(int a , int b)
{
	cout << "hhh" << endl;
}

void func(int b, int a)
{
	cout << "hhh" << endl;
}


int main()
{
	int a = 10;
	int b = 20;

	//Swap(a,b);

	//cout << "a= " << a << endl;
	//cout << "b= " << b << endl;
	//int d = test1();
	//func(10,20);
	test2(a);

	a = 20;
	//cout << "d= " << d << endl;

	cout << "a= " << a << endl;

	system("pause");
	return 0;
}