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

	Person& operator--()//ǰ��--ʵ�����Ƕ�ͬһ�������в��������Ҫ����һ������
	{
		this->age--;
		return *this;
	}

	Person operator--(int)//����--ֻ��Ҫ����һ����ʱֵ������,int ��ռλ������������ǰ�úͺ���
	{
		Person temp = *this;
		this->age--;
		return temp;
	}

private:

	int age;

};

ostream& operator<<(ostream &cout,Person p)//<<������������ؿ����p��
{
	cout << p.age;

	return cout;
}

int main()
{
	Person p;

	p--;//����ʵ�����ؿ����ڴ���
	cout << p-- << endl;
	cout << p << endl;

	return 0;
}