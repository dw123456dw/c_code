#include <iostream>
using namespace std;
#include <string>

template<class T1,class T2>
class Person
{
public:
	Person(T1 Name,T2 age);

	void show();

	T1 m_Name;
	T2 m_Age;
};

template <class T1,class T2>
Person<T1,T2>::Person(T1 Name, T2 age)
{
	this->m_Name = Name;
	this->m_Age = age;
}
template <class T1, class T2>
void Person<T1,T2>::show()
{
	cout << " ÐÕÃû " << this->m_Name << " " << "ÄêÁä " << this->m_Age << endl;
}

int main()
{
	Person<string,int> p("hh", 30);
	p.show();
	return 0;
}