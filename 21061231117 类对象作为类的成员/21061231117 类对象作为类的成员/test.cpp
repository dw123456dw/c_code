#pragma once
#include <iostream>
using namespace std;
#include <string>

class Phone
{

public:

	Phone(string name)
	{
		Pname = name;
		cout << "�ֻ���" << endl;
	}

	~Phone()
	{
		cout << "�ֻ�������" << endl;
	}

	string Pname;


};



class Person
{
public:
	Person(string name1, string name2) :Pname(name1), Pphone(name2)
	{
		cout << "����" << endl;
	}

	~Person()
	{
		cout << "�˵�����" << endl;
	}

	string Pname;
	Phone Pphone;
};


void test()
{
	Person p("����","ƻ��13");//�ȴ����ֻ��ٴ����ˣ����������������ֻ���������Ŷ
	cout <<   p.Pname << "����" << "�ֻ�" << p.Pphone.Pname << endl;
}



int main()
{
	test();

	return 0;
}