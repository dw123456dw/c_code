#pragma once
#include <iostream>
using namespace std;
#include <string>

class Peseron
{
public:
	string P_Name;//����Ȩ��  ��Ա  ���ڿ��Է��ʣ�����Ҳ���Է���

protected:

	string P_Car;  //����Ȩ��  ��Ա  ���ڿ��Է��ʣ����ⲻ���Է���


private:

	string P_Cardpassword;//˽��Ȩ��  ��Ա  ���ڿ��Է��ʣ����ⲻ���Է���

public:
	void fun()
	{
		P_Name = "zhangsan";
		P_Car = "����";
		P_Cardpassword = 123456;
	}
};



int main()
{
	Peseron p1;

	p1.P_Name = "zhangsan";

	//p1.P_car = "����";
	//p1.P_Cardpassword = 123456;
	//�����������ⲻ�ɷ���
	return 0;
}