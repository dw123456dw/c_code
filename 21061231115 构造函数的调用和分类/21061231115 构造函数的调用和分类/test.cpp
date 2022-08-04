#pragma once
#include <iostream>
using namespace std;


class Person
{
	//构造函数
public:
	Person()//无参
	{
		cout << "Person无参构造函数的调用" << endl;
	}

	Person(int a)//有参
	{
		age = a;
		cout << "Person有参构造函数的调用" << endl;
	}

	//拷贝构造函数
	Person(const Person &p)
	{
		age = p.age;
		cout << "Person拷贝构造函数的调用" << endl;
	}



	//析构函数在被释放时调用，且调用一次
	~Person()
	{
		cout << "Person析构函数的调用" << endl;
	}

private:
	int age;
};



void test1()
{
	//括号法调用
	//Person p;
	//Person p1(10);
	//Person p2(p1);
	//注意事项： 别写成Person p();来用括号法调用无参构造函数，编译器会认为这是一个函数声明。
	

	//显示法调用
	/*Person p1;
	Person p2 = Person(10);
	Person p3 = Person(p2);*/

	//Person(10);//匿名对象在本行代码执行后自动销毁

	//不要用拷贝构造函数来初始化一个匿名对象
	//Person(p3);//编译器认为是Person(p3) = Person p3;会重定义


	//隐式转换法调用
	Person p4 = 10;//相当于Person p4 = Person(10);
	Person p5 = p4;

}


int main()
{
	test1();

	return 0;
}