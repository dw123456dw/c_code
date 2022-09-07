#include <iostream>

using namespace std;


class Base
{
public:
	virtual void func() = 0;    //纯虚函数，无法实例化对象
};


class Son :public Base
{
public:
	virtual void func()
	{
		cout << "son func" << endl;
	}
};



int main()
{

	//Base b;    无法实例化，如果子类不重写虚函数，子类也无法实例化

	Base* B = new Son;   //利用一个父类指针管理子类

	B->func();


	return 0;
}