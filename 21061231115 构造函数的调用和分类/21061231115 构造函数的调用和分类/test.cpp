#pragma once
#include <iostream>
using namespace std;


class Person
{
	//���캯��
public:
	Person()//�޲�
	{
		cout << "Person�޲ι��캯���ĵ���" << endl;
	}

	Person(int a)//�в�
	{
		age = a;
		cout << "Person�вι��캯���ĵ���" << endl;
	}

	//�������캯��
	Person(const Person &p)
	{
		age = p.age;
		cout << "Person�������캯���ĵ���" << endl;
	}



	//���������ڱ��ͷ�ʱ���ã��ҵ���һ��
	~Person()
	{
		cout << "Person���������ĵ���" << endl;
	}

private:
	int age;
};



void test1()
{
	//���ŷ�����
	//Person p;
	//Person p1(10);
	//Person p2(p1);
	//ע����� ��д��Person p();�������ŷ������޲ι��캯��������������Ϊ����һ������������
	

	//��ʾ������
	/*Person p1;
	Person p2 = Person(10);
	Person p3 = Person(p2);*/

	//Person(10);//���������ڱ��д���ִ�к��Զ�����

	//��Ҫ�ÿ������캯������ʼ��һ����������
	//Person(p3);//��������Ϊ��Person(p3) = Person p3;���ض���


	//��ʽת��������
	Person p4 = 10;//�൱��Person p4 = Person(10);
	Person p5 = p4;

}


int main()
{
	test1();

	return 0;
}