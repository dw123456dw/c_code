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
	Person p1("����", 100);
	Person p2("����", 200);
	Person p3("����", 300);
	Person p4("��ΰ", 400);
	Person p5("����", 500);
	Person p6("����",600);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	v.push_back(p6);

	for (vector<Person>::iterator it=v.begin();it!=v.end();it++)
	{
		cout << "����" << (*it).m_Name << "����" << (*it).m_Age << endl;
	}

	//����it��ָ��ָ��һ��person���Կ�����->����  �Լ���ȥfw

	return 0;
}