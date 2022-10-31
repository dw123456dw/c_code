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


	Person(string name,string add)   //默认
	{
		this->m_NAme = name;
		this->m_Address = add;
	}

	Person(Person& temp)             //浅复制
	{
		this->m_NAme = temp.m_NAme;
		this->m_Address = temp.m_Address;
	}

	Person& operator=(Person& p)     //重载
	{
		if (&p==this)  //防止自己赋值自己真蠢
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
	Person p1("丁伟","贵州");
	Person p2("王博","甘肃");
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
	int volume()   //懒用int
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
	cout << "体积为: " << v.volume() << "面积为: " << v.area() << endl;
}

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}
