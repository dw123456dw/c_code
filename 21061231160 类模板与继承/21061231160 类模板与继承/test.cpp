#include <iostream>
using namespace std;

template <class T>
class Dad
{
public:
	T m;
};
//class Son1:public Dad<char>    //显式告诉编译器父类中的模板类型

template <class T1,class T2>
class Son2:public Dad<T2>
{
public:
	T1 obj;

	void show()
	{
		cout << "T1的类型" << typeid(T1).name() << endl;   //typeid的使用
		cout << "T2的类型" << typeid(T2).name() << endl;
	}
};

void test()
{
	Son2 <int , char>s;     //怎么老是忘记类型
	s.show();
}

int main()
{
	test();

	return 0;
}