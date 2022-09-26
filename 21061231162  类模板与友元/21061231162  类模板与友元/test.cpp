#include <iostream>
using namespace std;
#include <string>

template <class T1, class T2>
class Person;

template <class T1,class T2>
void printout(Person<T1, T2> p)
{
	cout << "姓名 " << p.m_Name << "年龄" << p.m_Age << endl;

}

template<class T1,class T2>
class Person
{
	//类内实现
	friend void print(Person<T1,T2> p)
	{
		cout << "姓名 " << p.m_Name << "年龄" << p.m_Age << endl;
	}
	friend void printout<>(Person<T1,T2> p);      //还得tm加个空模板真jb麻烦
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
	Person<string,int> p("张三",100);
	printout(p);
}


int main()
{
	test();
	return 0;
}