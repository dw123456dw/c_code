#pragma once
#include <iostream>
using namespace std;
#include <string>

const double PI = 3.14;

class Circle
{
	//Ȩ��
public:

	//����
	int r;

	//��Ϊ
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
		cout << "������ " << name << endl;
		cout << "ѧ�ţ� " << stunum << endl;
	}

};



int main()
{
	//Circle c1;

	//c1.r = 10;

	//cout << "�ܳ��� : " << c1.circumference() << endl;

	student s1;

	s1.stename("dw");
	s1.setnum(21061231);

	s1.print();

	return 0;
}