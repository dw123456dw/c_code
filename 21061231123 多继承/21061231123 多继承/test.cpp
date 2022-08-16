#pragma once
#include <iostream>
using namespace std;


class Person1
{
public:
	Person1()
	{
		a = 50;
		b = 60;
	}
	int a;
private:
	int b;
};


class Person2
{
public:
	Person2()
	{
		a = 10;
		b = 20;
	}
	int a;
private:
	int b;
};

class son :public Person1,public Person2
{
public:
	son()
	{
		a = 90;
	}
	int a;
};

int main()
{
	son s;
	
	cout << s.a << endl;
	cout << s.Person1::a << endl;
	cout << s.Person2::a << endl;


	return 0;
}