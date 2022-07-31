#pragma once
#include <iostream>
using namespace std;
#include <string>

const double PI = 3.14;

class Circle
{
	//权限
public:

	//属性
	int r;

	//行为
	double circumference()
	{
		return 2 * PI * r;
	}

};


class student
{
public:

	string name;
	int stunum=0;

	void stename(string x)
	{
		name = x;
	}

	void setnum(int a)
	{
		stunum = a;
	}


	void print()
	{
		cout << "姓名： " << name << endl;
		cout << "学号： " << stunum << endl;
	}

};



int main()
{
	//Circle c1;

	//c1.r = 10;

	//cout << "周长是 : " << c1.circumference() << endl;

	student s1;

	s1.stename("dw");
	s1.setnum(21061231);

	s1.print();

	return 0;
}