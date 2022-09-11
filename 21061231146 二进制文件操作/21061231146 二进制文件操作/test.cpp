#include <iostream>
using namespace std;

#include <fstream>

class Person
{
public:
	char Name[20];
	int Age;
};




int main()
{
	//Person P = {"张三",18};

	//ofstream ofs;


	//ofs.open("Person.txt",ios::out|ios::binary);

	//ofs.write((const char*)&P,sizeof(Person);
	//ofs.close();

	Person P1;
	ifstream ifs;
	ifs.open("Person.txt",ios::in|ios::binary);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return 0;
	}


	ifs.read((char*)&P1,sizeof(Person));

	cout << P1.Name << P1.Age << endl;

	ifs.close();


	return 0;
}