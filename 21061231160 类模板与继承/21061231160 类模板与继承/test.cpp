#include <iostream>
using namespace std;

template <class T>
class Dad
{
public:
	T m;
};
//class Son1:public Dad<char>    //��ʽ���߱����������е�ģ������

template <class T1,class T2>
class Son2:public Dad<T2>
{
public:
	T1 obj;

	void show()
	{
		cout << "T1������" << typeid(T1).name() << endl;   //typeid��ʹ��
		cout << "T2������" << typeid(T2).name() << endl;
	}
};

void test()
{
	Son2 <int , char>s;     //��ô������������
	s.show();
}

int main()
{
	test();

	return 0;
}