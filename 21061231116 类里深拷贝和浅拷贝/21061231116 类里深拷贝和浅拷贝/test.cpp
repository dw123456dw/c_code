#pragma once
#include <iostream>
using namespace std;

//ǳ����ֻ�Ǽ򵥵�ֵ����
class Person
{
public:
	Person()
	{
		cout << "Ĭ�Ϲ��캯���ĵ���" << endl;
	}

	Person(int a,int h)
	{
		Age = a;
		Hall = new int(h);
		cout << "�вι���ĵ���" << endl;
	}
	//���������ϵͳĬ�ϵ��Ǽ򵥵�ֵ����Ҳ����ǳ����
	Person(const Person &p)//���������newһ������
	{
		Age = p.Age;
		Hall = new int(*p.Hall); 
		cout << "���Լ��Ŀ������������Ŷ" << endl;
	}


	~Person()
	{
		if (Hall != NULL)
		{
			delete Hall;
			Hall = NULL;
		}
		cout << "���������ĵ���" << endl;
	}

private:

	int Age;
	int* Hall;
};


void test1()
{
	//Person p1(10,160);
	//Person p2(p1);����д�����Ϊ��ϵͳĬ���ṩ�Ŀ������캯����ǳ�������������ͷ���ͬһ��new�ڶ��ϵĿռ䣬�������Լ�д�Ŀ�������
	Person p1(10,160);
	Person p2(p1);
}



int main()
{
	test1();

	return 0;
}