#include <fstream>
#include <iostream>
using namespace std;
#include <string>


int main()
{
	//ofstream ofs;

	//ofs.open("test.txt",ios::out);

	//ofs << "姓名： 张三" << endl;
	//ofs << "性别：  男 " << endl;
	//ofs << "年龄：  18 " << endl;


	ifstream ifs;
	ifs.open("test.txt",ios::in);


	string buf;

	while(getline(ifs,buf))
    {
		cout << buf << endl;
    }


	ifs.close();
	return 0;
}





