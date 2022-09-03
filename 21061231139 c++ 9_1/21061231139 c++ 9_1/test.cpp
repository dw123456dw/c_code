#include <iostream>
using namespace std;
#include <string>
#include <vector>




void test()
{
	vector<string> s = {"hi","lihua","zhangsan"};

	for (auto begin=s.begin();begin!=s.end();begin++)
	{
		cout << (*begin).size() << endl;
		cout << begin->size() << endl;
	}
}








int main()
{
	//vector<int> v1;
	//

	//for (int i=0;i<10;i++)
	//{
	//	v1.push_back(i);
	//}
	//v1.pop_back();
	//v1.pop_back();
	//v1.pop_back();

	//cout << v1.at(1) <<endl ; 
	//
	//auto begin = v1.begin();
	//auto end = v1.end();

	//cout << *begin << endl;
 //  	//cout << *end << endl;

	//v1.clear();


	test();
	return 0;
}

