#pragma once
#include <iostream>
#include <string>
using namespace std;


class Person
{

public:

	void operator()(string test)//���أ������Ƿº���,д��������
	{
		cout << test << endl;
	}


	int age;

};




int main()
{
	Person p;
	p("hello world");

	return 0;
}