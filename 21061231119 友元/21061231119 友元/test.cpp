#pragma once
#include <iostream>
using namespace std;

class Person
{
	friend void GoodFriend(Person &p);//全局函数做友元，还可以用类，成员函数做友元
public:

	Person()
	{
		Room = "客厅";
		BedRoom = "卧室";
	}

	string Room;

private:

	string BedRoom;
};

void GoodFriend(Person &p)
{
	cout << "好朋友在访问 " << p.Room << endl;
	cout << "好朋友在访问 " << p.BedRoom << endl;
}


void test1()
{	
	Person p1;
	GoodFriend(p1);
}


int main()
{
	test1();

	return 0;
}
