#pragma once
#include <iostream>
using namespace std;
#include <string>

class Peseron
{
public:
	string P_Name;//公告权限  成员  类内可以访问，类外也可以访问

protected:

	string P_Car;  //保护权限  成员  类内可以访问，类外不可以访问


private:

	string P_Cardpassword;//私有权限  成员  类内可以访问，类外不可以访问

public:
	void fun()
	{
		P_Name = "zhangsan";
		P_Car = "奔驰";
		P_Cardpassword = 123456;
	}
};



int main()
{
	Peseron p1;

	p1.P_Name = "zhangsan";

	//p1.P_car = "奔驰";
	//p1.P_Cardpassword = 123456;
	//上面俩在类外不可访问
	return 0;
}