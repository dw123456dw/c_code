#include <iostream>
using namespace std;
#include <map>

class compare
{
public:
	bool operator()(int v1,int v2) const
	{
		return v1 > v2;
	}
};

void printmap(map<int,int,compare> &m)
{
	for (map<int,int>::iterator it=m.begin();it!=m.end();it++)
	{
		cout << "¼ü = " << it->first << " Öµ = " << it->second <<endl;
	}
}

void test(void)
{
	map<int, int,compare> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(5, 50));
	m.insert(pair<int, int>(2, 20));
	//printmap(m);

	m.erase(1);
	m.erase(m.begin());
	printmap(m);

	map<int,int>::iterator pos = m.find(4);
	cout << pos->first << "  " << pos->second << endl;

	int count = m.count(10);
	cout << count << endl;
}

int main()
{
	test();

	return 0;
}