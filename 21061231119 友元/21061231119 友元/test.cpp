#pragma once
#include <iostream>
using namespace std;

class Person
{
	friend void GoodFriend(Person &p);//ȫ�ֺ�������Ԫ�����������࣬��Ա��������Ԫ
public:

	Person()
	{
		Room = "����";
		BedRoom = "����";
	}

	string Room;

private:

	string BedRoom;
};

void GoodFriend(Person &p)
{
	cout << "�������ڷ��� " << p.Room << endl;
	cout << "�������ڷ��� " << p.BedRoom << endl;
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
