#pragma once
#include <iostream>
using namespace std;

//浅拷贝只是简单的值拷贝
class Person
{
public:
	Person()
	{
		cout << "默认构造函数的调用" << endl;
	}

	Person(int a,int h)
	{
		Age = a;
		Hall = new int(h);
		cout << "有参构造的调用" << endl;
	}
	//这是深拷贝，系统默认的是简单的值拷贝也就是浅拷贝
	Person(const Person &p)//深拷贝，重新new一个拷贝
	{
		Age = p.Age;
		Hall = new int(*p.Hall); 
		cout << "我自己的拷贝函数是深拷贝哦" << endl;
	}


	~Person()
	{
		if (Hall != NULL)
		{
			delete Hall;
			Hall = NULL;
		}
		cout << "析构函数的调用" << endl;
	}

private:

	int Age;
	int* Hall;
};


void test1()
{
	//Person p1(10,160);
	//Person p2(p1);这样写会崩因为用系统默认提供的拷贝构造函数是浅拷贝两次析构释放了同一个new在堆上的空间，除非用自己写的拷贝构造
	Person p1(10,160);
	Person p2(p1);
}



int main()
{
	test1();

	return 0;
}