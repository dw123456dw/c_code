#include <iostream>
using namespace std;


class Person
{
public:
	//静态变量类内声明，类外定义
	//编译阶段就分配内存
	static void func()
	{
		//b = 10;静态函数不能操作非静态变量
		a = 20;
		cout << "静态函数的调用" << endl;
	}


	static int a;
	int b;
};

int Person::a = 100;

int main()
{
	//两种访问方式

	Person p;
	cout << p.a << endl;

	cout << Person::a << endl;


	Person::func();


	return 0;
}