#include <iostream>
using namespace std;
#include <vector>
#include <string>


class Person
{
public:
	Person(string name,int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	string m_Name;
	int m_Age;
};

int main()
{
	vector<Person> v;
	Person p1("张三", 100);
	Person p2("李四", 200);
	Person p3("王五", 300);
	Person p4("丁伟", 400);
	Person p5("哇哇", 500);
	Person p6("哈哈",600);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	v.push_back(p6);

	for (vector<Person>::iterator it=v.begin();it!=v.end();it++)
	{
		cout << "姓名" << (*it).m_Name << "年龄" << (*it).m_Age << endl;
	}

	//由于it是指针指向一个person所以可以用->操作  自己试去fw

	return 0;
}