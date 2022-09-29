#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void myprint(int val)
{
	cout << val << endl;
}

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	vector<int>::iterator itBegin = v.begin();
	vector<int>::iterator itEnd = v.end();

	while (itBegin!=itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}
	for (vector<int>::iterator begin=v.begin();begin!=v.end();begin++)
	{
		cout << *begin << endl;
	}


	for_each(v.begin(),v.end(),myprint);


	return 0;
}