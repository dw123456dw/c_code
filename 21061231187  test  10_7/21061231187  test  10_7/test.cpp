#include <iostream>
using namespace std;
#include <string>
//#define MAX(a,b) f((a)>(b)?(a):(b))


class Person
{
public:
	Person() = default;                      //����ʹ��Ĭ�Ϲ��캯��
	explicit Person(int age,string name)     //�ùؼ������Ʊ�����������ʽת��
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	int m_Age;
	string m_Name;
};

void test1()
{
	Person a;
	Person b(10, "dw");
}

class GamePlayer
{
public:
	static const int NumTurns = 5;
	int scores[NumTurns];
};

void test2()
{
	GamePlayer g,h;
	const int* p = &g.NumTurns;

	cout << &g.NumTurns << endl;     //staticλ�ڳ��������Դ����������඼����һ��NumThrns����˵�ַҲһ��
	cout << &h.NumTurns << endl;
	cout << &g.scores << endl;
	cout << &h.scores << endl;
	cout << p << endl;
}

template<typename T>
inline void Max(const T& a,const T& b)
{
	//f(a > b ? a : b);
}

void test3()
{
	//Max(1, 5);
	static int x = 10;
	x = 20;
	cout << x;
}



int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}


