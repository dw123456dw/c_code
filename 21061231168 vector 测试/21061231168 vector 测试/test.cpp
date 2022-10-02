#include <iostream>
using namespace std;
#include <vector>

void print(vector<int> &v)
{
	for (vector<int>::iterator it=v.begin();it!=v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test()
{
	vector<int> v1;

	for (int i=0;i<10;i++)
	{
		v1.push_back(i);
	}

	vector<int>v2 = v1;

	print(v2);
	//v2.clear();
	v2.resize(15,100);

	if (v2.empty())
	{
		cout << "空了" << endl;
	}
	else
	{
		cout << "不为空 " << endl;
		cout << "容量 " << v2.capacity() << endl;
		cout << "大小" << v2.size() << endl;
	}
	v2.pop_back();
	v2.insert(v2.begin(),10);
	v2.erase(v2.begin());
	v2.erase(v2.begin(),v2.end());
	v2.insert(v2.begin(),5,100);

	for (int i=0;i<v2.size();i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2.at(i) << " ";
	}
	cout << endl;

	cout << "第一个元素 " << v2.front() << endl;
	cout << "最后一个元素 " << v2.back() << endl;

	vector<int>v3;

	for (int i=0;i<100000;i++)
	{
		v3.push_back(i);
	}

	v3.resize(5);
	//之前为13855
	cout << "容量 " << v3.capacity() << endl;
	cout << "大小" << v3.size() << endl;

	vector<int>(v3).swap(v3);   //巧用swap可以收缩空间   匿名函数

	//之后为5
	cout << "容量 " << v3.capacity() << endl;
	cout << "大小" << v3.size() << endl;
}


int main()
{
	test();
	return 0;
}