#include <iostream>
using namespace std;


class Person
{
public:
	//��̬�����������������ⶨ��
	//����׶ξͷ����ڴ�
	static void func()
	{
		//b = 10;��̬�������ܲ����Ǿ�̬����
		a = 20;
		cout << "��̬�����ĵ���" << endl;
	}


	static int a;
	int b;
};

int Person::a = 100;

int main()
{
	//���ַ��ʷ�ʽ

	Person p;
	cout << p.a << endl;

	cout << Person::a << endl;


	Person::func();


	return 0;
}