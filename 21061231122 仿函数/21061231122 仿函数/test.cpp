#pragma once
#include <iostream>
#include <string>
using namespace std;


class Person
{

public:

	void operator()(string test)//重载（）就是仿函数,写法很自由
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