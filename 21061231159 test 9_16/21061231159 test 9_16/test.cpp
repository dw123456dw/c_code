#include <iostream>
using namespace std;
#include <string>

template <class T1,class T2>
class Person
{
public:
	Person(T1 name,T2 age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	void show()
	{
		cout << "名字" << this->m_Name << endl;
		cout << "年龄" << this->m_Age << endl;
	}
	T1 m_Name;
	T2 m_Age;
};


//void print(Person <string, int>&p)//直接告诉编译器
//{
//	p.show();
//}
//template<class T1,class T2>  //参数模板化  真奇怪
//void print1(Person<T1,T2>&p)
//{
//	p.show();
//}
template <class T>
void print2(T &p)
{
	p.show();
}

void test()
{
	Person <string,int>p("张三",100);
	//print(p);
	//print1(p);
	print2(p);
}

int main()         //模板做参数的三种方法
{
	test();
	return 0;
}