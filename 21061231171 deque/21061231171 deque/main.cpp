#include <iostream>
using namespace std;
#include <deque>

void print(const deque<int>&d)
{
	for (deque<int>::const_iterator it=d.begin();it!=d.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test()
{
	deque<int> d1;

	for (int i=0;i<10;i++)
	{
		d1.push_back(i);
	}
	print(d1);

	deque<int> d2;
	d2 = d1;
	print(d2);

	deque<int> d3;
	d3.assign(10,100);
	print(d3);

	deque<int> d4;
	d4.assign(d3.begin(),d3.end());
	print(d4);

}

int main()
{
	test();
	return 0;
}