#include <stdio.h>
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//    int i = nums1Size - 1;
//    m--;
//    n--;
//    while (n >= 0)
//    {
//        if (nums1[m] < nums2[n])
//        {
//            nums1[i--] = nums2[n--];
//        }
//        else
//        {
//            nums1[i--] = nums1[m--];
//        }
//    }
//}
//
//
//
//int main()
//{
//    int arr1[] = {0};
//    int arr2[] = { 1 };
//    merge(arr1,1,0,arr2,1,1);
//	return 0;
//}
#include <iostream>
using namespace std;
#include <set>
#include <string>

//class MyCompare
//{
//public:
//	bool operator()(int v1,int v2)const
//	{
//		return v1 > v2;
//	}
//};
//
//int main()
//{
//	set<int, MyCompare> s;
//	s.insert(10);
//	s.insert(20);
//	s.insert(50);
//	s.insert(30);
//	s.insert(40);
//
//	for (set<int,MyCompare>::iterator it=s.begin();it!=s.end();it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	return 0;
//}
class Person
{
public:
	Person(string name,int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	string m_Name;
	int m_Age;
};

class comp
{
public:
	bool operator()(const Person& p1,const Person& p2)const
	{
		return p1.m_Age > p2.m_Age;
	}
};



int main()
{
	set<Person, comp> s;
	Person p1("张三", 10);
	Person p2("李四", 20);
	Person p3("王五", 15);
	Person p4("丁伟",30);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person,comp>::iterator it=s.begin();it!=s.end();it++)
	{
		cout << "姓名 " << it->m_Name << "年龄 " << it->m_Age << endl;
	}
	return 0;
}

