#include <iostream>
using namespace std;

template <typename T>
const T& getmax(const T &a,const T &b)
{
	return a > b ? a : b;
}




int main()
{
	//cout << getmax(1.0,2.0) << endl;
	cout << getmax(5.3, 2.5) << endl;
	cout << getmax<string>("hi","c++") << endl;

	return 0;
}