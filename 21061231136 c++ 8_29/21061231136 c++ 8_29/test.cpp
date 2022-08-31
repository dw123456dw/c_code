#include <iostream>
using namespace std;
#include <string>



void test()
{
	string s;
	cout << "ÇëÊäÈë×Ö·û´®" << endl;
	cin >> s;
	cout << s.length() << endl;

	string* p = &s;
	cout << p->length() << endl;


	string s1 = "hello ";
	string s2 = "c++";
	string s3 = s1 + s2;

	cout << s3 << endl;
}


int main()
{
	test();


	return 0;
}