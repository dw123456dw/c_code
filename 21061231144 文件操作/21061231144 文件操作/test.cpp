#include <fstream>
#include <iostream>
using namespace std;
#include <string>


int main()
{
	//ofstream ofs;

	//ofs.open("test.txt",ios::out);

	//ofs << "������ ����" << endl;
	//ofs << "�Ա�  �� " << endl;
	//ofs << "���䣺  18 " << endl;


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





