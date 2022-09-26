#include <iostream>
using namespace std;
#include <string>

template <class T1, class T2>
class Person;

template <class T1,class T2>
void printout(Person<T1, T2> p)
{
	cout << "���� " << p.m_Name << "����" << p.m_Age << endl;

}

template<class T1,class T2>
class Person
{
	//����ʵ��
	friend void print(Person<T1,T2> p)
	{
		cout << "���� " << p.m_Name << "����" << p.m_Age << endl;
	}
	friend void printout<>(Person<T1,T2> p);      //����tm�Ӹ���ģ����jb�鷳
public:
	Person(T1 name,T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
private:
	T1 m_Name;
	T2 m_Age;
};


void test()
{
	Person<string,int> p("����",100);
	printout(p);
}


int main()
{
	test();
	return 0;
}