#include <iostream>
using namespace std;
#include <string>

class Person
{
public:

	Person(int age,string name)
	{
		this->m_age = age;
		this->m_Name = name;
	}

	int m_age;
	string m_Name;
};

template<typename T>
bool IsSame(T &a,T& b)
{
	if (a==b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//<>�ﲻ��д����ֻ�ǽ��Person�������ʹ���
template<> bool IsSame(Person& p1, Person& p2)
{
	if (p1.m_age==p2.m_age && p1.m_Name==p2.m_Name)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void test()
{
	int a = 10;
	int b = 20;

	bool ret = IsSame(a,b);
	if (ret)
	{
		cout << "a==b" << endl;
	}
	else
	{
		cout << "a!=b" << endl;
	}
}

void test1()
{
	Person p1(10,"tom");
	Person p2(10,"tom");

	//bool ret=IsSame(p1,p2);//�������Ǳ���������Ƚ���
	//������������     1.���ط���     2.ֱ�Ӹ��߱�����һ�ַ���
	bool ret = IsSame(p1,p2);

	if (ret)
	{
		cout << "a==b" << endl;
	}
	else
	{
		cout << "a!=b" << endl;
	}
}
int main()
{
	//test();
	test1();

	return 0;
}