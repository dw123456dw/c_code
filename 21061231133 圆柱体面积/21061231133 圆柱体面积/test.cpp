#include <iostream>

using namespace std;

class Cylinder
{
public:
	double s, h;

	double GetV( )
	{
		return s * h;
	}


};

int main()
{
	Cylinder c;

	c.h = 10;
	c.s = 10;


	cout << "Ìå»ıÎª " << c.GetV() << endl;

	return 0;
}