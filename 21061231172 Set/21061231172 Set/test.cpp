#include <iostream>
using namespace std;
#include <set>
void print(const set<int> &s)
{
	for (set<int>::const_iterator it=s.begin();it!=s.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test(void)
{
	set<int> s;
	s.insert(10);
	s.insert(50);
	s.insert(40);
	s.insert(30);
	s.insert(20);
	s.insert(20);
	s.insert(20);
	s.insert(20);

	s.erase(s.begin());
	s.erase(50);
	print(s);
	set<int>::iterator pos = s.find(20);

	if (pos != s.end())
	{
		cout << "ÕÒµ½" << *pos << endl;
	}
	else
	{
		cout << "ÕÒ²»µ½" << endl;
	}
	int count = s.count(20);
	cout << count << endl;

}


int main()
{
	test();
	return 0;
}