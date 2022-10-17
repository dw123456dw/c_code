#include <iostream>
using namespace std;
#include <stack>


int revernum(int a)
{
	char* ret = (char*)&a;
	ret[0] = 3;
	ret[1] = 2;
	ret[2] = 1;
	return *ret;
}





int main()
{
	int a = 123;
	char* b = (char*)&a;
    //int ret=revernum(a);
	//cout << ret << endl;
	return 0;
}



