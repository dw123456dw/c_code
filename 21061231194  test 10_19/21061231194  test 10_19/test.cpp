#include <iostream>
using namespace std;
#include <string>

class Y;

class X
{
public:
	Y* m_Ptr;
};


class Y
{
public:
	Y(X x)
	{
		this->m_Num = x;
	}
	X m_Num;
};


//void test1()
//{
//	X x;
//	Y y(x);
//	x.m_Ptr = &y;
//}

class Person
{
public:
	string m_NAme;
	string m_Address;


	Person(string name,string add)   //Ĭ��
	{
		this->m_NAme = name;
		this->m_Address = add;
	}

	Person(Person& temp)             //ǳ����
	{
		this->m_NAme = temp.m_NAme;
		this->m_Address = temp.m_Address;
	}

	Person& operator=(Person& p)     //����
	{
		if (&p==this)  //��ֹ�Լ���ֵ�Լ����
		{
			return *this;
		}
	
		this->m_Address = p.m_Address;
		this->m_NAme = p.m_NAme;

		return *this;
	}
};

void test2()
{
	Person p1("��ΰ","����");
	Person p2("����","����");
	p1 = p2;
	Person p3(p1);
}

class V
{
public:
	V(int L,int W,int H)
	{
		this->m_High = H;
		this->m_Long = L;
		this->m_Wide = W;
	}
	int volume()   //����int
	{
		return m_High * m_Long * m_Wide;
	}
	int area()
	{
		return m_High * m_Long * 2 + m_High * m_Wide * 2 + m_Long * m_Wide * 2;
	}
private:
	int m_Long;
	int m_Wide;
	int m_High;
};
void test3()
{
	V v(10,10,10);
	cout << "���Ϊ: " << v.volume() << "���Ϊ: " << v.area() << endl;
}

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}
