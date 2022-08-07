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
		cout << "手机先" << endl;
	}

	~Phone()
	{
		cout << "手机的析构" << endl;
	}

	string Pname;


};



class Person
{
public:
	Person(string name1, string name2) :Pname(name1), Pphone(name2)
	{
		cout << "人先" << endl;
	}

	~Person()
	{
		cout << "人的析构" << endl;
	}

	string Pname;
	Phone Pphone;
};


void test()
{
	Person p("张三","苹果13");//先创建手机再创建人，先销毁人在销毁手机，反过来哦
	cout <<   p.Pname << "拿着" << "手机" << p.Pphone.Pname << endl;
}



int main()
{
	test();

	return 0;
}