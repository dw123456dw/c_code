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
		cout << "����" << this->m_Name << endl;
		cout << "����" << this->m_Age << endl;
	}
	T1 m_Name;
	T2 m_Age;
};


//void print(Person <string, int>&p)//ֱ�Ӹ��߱�����
//{
//	p.show();
//}
//template<class T1,class T2>  //����ģ�廯  �����
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
	Person <string,int>p("����",100);
	//print(p);
	//print1(p);
	print2(p);
}

int main()         //ģ�������������ַ���
{
	test();
	return 0;
}