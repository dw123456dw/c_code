#pragma once
#include <iostream>
using namespace std;


class Person
{
	friend ostream& operator<<(ostream& cout, Person p);
public:
	Person()
	{
		age = 10;
	}

	Person& operator--()//前置--实际上是对同一个数进行操作，因此要返回一个引用
	{
		this->age--;
		return *this;
	}

	Person operator--(int)//后置--只需要返回一个临时值就行了,int 是占位参数用来区分前置和后置
	{
		Person temp = *this;
		this->age--;
		return temp;
	}

private:

	int age;

};

ostream& operator<<(ostream &cout,Person p)//<<此运算符的重载可输出p类
{
	cout << p.age;

	return cout;
}

int main()
{
	Person p;

	p--;//具体实现重载看类内代码
	cout << p-- << endl;
	cout << p << endl;

	return 0;
}