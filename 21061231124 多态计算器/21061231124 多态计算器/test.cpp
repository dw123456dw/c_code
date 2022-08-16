#pragma once
#include <iostream>
using namespace std;
#include <string>

class calcuate
{
public:

	virtual int Getnum( )//Ðéº¯Êý
	{
		return 0;
	}

	int m_num1;
	int m_num2;
};

class Add:public calcuate
{
public:
	int Getnum( )
	{
		return m_num1 + m_num2;
	}
};

class sub :public calcuate
{
public:
	int Getnum()
	{
		return m_num1 - m_num2;
	}
};


void test1()
{
	calcuate* a = new Add;

	a->m_num1 = 10;
	a->m_num2 = 10;

	cout << "ret = " << a->Getnum() << endl;
	
	delete a;

}
void test2()
{
	Add a;
	a.m_num1 = 10;
	a.m_num2 = 10;

	cout << a.Getnum() << endl;
}


int main()
{
	//test1();

	test2();

	return 0;
}