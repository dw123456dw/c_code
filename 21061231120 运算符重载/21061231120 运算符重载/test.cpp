#pragma once
#include <iostream>
using namespace std;


class Person
{

public:
	Person operator+(Person &p)
	{
		Person temp;
		temp.m_a = this->m_a + p.m_a;
		temp.m_b = this->m_b + p.m_b;
		return temp;
	}

	int m_a;
	int m_b;

};



void test1()
{
	Person p1;
	p1.m_a = 10;
	p1.m_b = 10;

	Person p2;
	p2.m_a = 10;
	p2.m_b = 10;

	Person p3 = p1 + p2;
	cout << p3.m_a << endl;
	cout << p3.m_b << endl;
}


int main()
{
	test1();


	return 0;
}