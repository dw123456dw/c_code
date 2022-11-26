//#include <iostream>
//
//using namespace std;
//
//class Base
//
//{
//
//public:
//
//    virtual void f() { cout << "f0 +" ; }
//
//    void g() { cout << "g0 + "; }
//
//};
//
//class Derived : public Base
//
//{
//
//public:
//
//    void f() { cout << "f + ”"; }
//
//    void g() { cout << "g + "; }
//    
//
//};
//
//int main() {
//
//    Derived d;  Base* p = &d;  p->f();  p->g();
//
//    return 0;
//
//}



//#include<iostream>
//
//using namespace std;
//
//
//
//class Father {
//
//public:
//
//    int a;
//
//    Father(int a = 0) :Register(a) {};
//
//    void setRegister(int a) { Register = a; };
//
//
//
//    int Register;
//
//};
//
//
//
//class Son : public Father {
//
//public:
//
//    int isRegister() { cout << Register << endl; return Register; };
//
//};
//
//
//
//int main() {
//
//    Son son;
//
//    cout << son.Register;
//
//    son.setRegister(1);
//
//    son.isRegister();
//
//}

//#include <iostream>
//using namespace std;
//
//template<typename T>
//T getMax(T* arr,int size)
//{
//	T temp = arr[0];
//	for (int i=0;i<size;i++)
//	{
//		if (arr[i]>=temp)
//		{
//			temp = arr[i];
//		}
//	}
//
//	return temp;
//}
//int main()
//{
//	int arr1[] = { 1,5,9,7,4,3,0,8 };
//	char arr2[] = {'a','s','f','h','u'};
//	int ret1 = getMax(arr1,8);
//	char ret2 = getMax(arr2,5);
//
//	cout << ret1 << endl;
//	cout << ret2 << endl;
//	return 0;
//}





//编写一个理财程序，其中包含四个类，分别为投资、储蓄、基金和理财人。
//储蓄和基金为两种具体投资，有确定的投资金额m_capital，但它们年底结算（settle）方式不同。
//储蓄结算方式m_capital = m_capital * （1 + 1.78 / 100）
//基金结算方式m_capital = m_capital * （rand() % 20 + 90） / 100
//理财人实例化时确定本金m_cashflow。理财人通过成员函数addinvest添加投资，
//将新建的投资实例地址保存在vector类型的成员mv_invests中，并从本金减去投资额。
//一年后，理财人通过成员函数settle结算所有投资，并将投资额返回到本金。
//实现效果如下：
//Person wang(100000);
//wang.addinvest(saving(50000));  //储蓄投资5万
//wang.addinvest(fund(20000));  //基金投资2万
//cout << wang.settle() << endl;  //年底投资额返回本金
//给出投资、储蓄、基金、理财人四个类的定义，并利用上述代码进行测试。
#include <iostream>
using namespace std;
#include <vector>
#include <cstdlib>

class investment  //投资基类
{
public:
	int m_capital;
	int money;
};

class saving : public investment
{
public:
	saving(int m)
	{
		this->m_capital = m;
		this->money = m;
		this->m_capital = m_capital * (1 + 1.78 / 100);
	}

};
class fund : public investment
{
public:
	fund(int m)
	{
		this->m_capital = m;
		this->money = m;
		this->m_capital = m_capital * (rand() % 20 + 90) / 100;
	}
};
class Person
{
public:
	Person(int m)
	{
		this->m_cashflow = m;
	}
	void addinvest(saving& s)
	{
		this->m_cashflow -= s.money;
		this->mv_invests1.push_back(s);
	}
	void addinvest(fund& f)
	{
		this->m_cashflow -= f.money;
		this->mv_invests2.push_back(f);
	}
	int settle()
	{
		int temp = 0;
		temp += (this->mv_invests1[0].m_capital + this->mv_invests2[0].m_capital);
		this->m_cashflow = this->m_cashflow + temp;
		return this->m_cashflow;
	}
private:
	vector<saving> mv_invests1;
	vector<fund> mv_invests2;
	int m_cashflow;
};
int main()
{
	srand((unsigned int)time(NULL));
	Person wang(100000);
	saving s(50000);
	fund f(20000);
	wang.addinvest(s);  //储蓄投资5万
	wang.addinvest(f);  //基金投资2万
	cout << wang.settle() << endl;  //年底投资额返回本金
	return 0;
}