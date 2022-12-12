#include<iostream>

using namespace std;

//int (*fun)(int,int);
//typedef int (*fun)(int, int);
//
//int maxdata(int x, int y) {
//
//    int temp;
//
//    temp = max(x,y);
//
//    return temp;
//}
//
//
//
//int main() {
//
//    int a = 1, b = 2;
//
//    fun f1 = maxdata;//或者fun f1=&maxdata;
//
//    cout << f1(a, b);
//
//    return 0;
//
//}


//class A {
//
//public:
//
//    int m_val = 1;
//
//};
//
//class B :public A {
//
//public:
//
//    int m_val = 2;
//};
//
//int main()
//{
//    B data;
//
//    cout << data.m_val << endl;
//
//    cout << data.A::m_val << endl;
//
//    return 0;
//}

//class cube
//{
//public:
//	cube()
//	{
//		;
//	}
//	cube(int x,int y,int z)
//	{
//		this->Long = x;
//		this->wide = y;
//		this->high = z;
//	}
//
//	void setdata()
//	{
//		int temp1,temp2,temp3;
//		cout << "请输入长宽高" << endl;
//		cin >> temp1 >> temp2 >> temp3;
//
//		this->Long = temp1;
//		this->wide = temp2;
//		this->high = temp3;
//	}
//
//	int vol()
//	{
//		return Long * wide * high;
//	}
//	int Long;
//	int wide;
//	int high;
//};


//int main()
//{
//	//cube a(1,2,3);
//	//cout << a.vol() << endl;
//	cube data;  //创建一个立方体对象
//
//	data.setdata();   //键盘录入立方体的长宽高的值
//
//	cout << data.vol() << endl;  //输出立方体的体积
//
//
//
//	return 0;
//}

//class CSample
//{
//    int i;
//public:
//    CSample() {
//        cout << "Constructor1" << endl;
//    }
//    CSample(int val) :i(val) {
//        cout << "Constructor2" << endl;
//    }
//    ~CSample() {
//        cout << "Destructor" << endl;
//    }
//    void disp();
//};
//
//void CSample::disp()
//{
//    cout << "i=" << i << endl;
//}
//
//int main()
//{
//    CSample* a = new CSample;
//    CSample b(10), c;
//    a->disp();
//    b.disp();
//    delete a;
//    return 0;
//}

//class Point
//{
//public:
//	Point(int a,int b)
//	{
//		this->x = a;
//		this->y = b;
//	}
//	int x;
//	int y;
//};
//class Rectangle
//{
//public:
//	void print(Point& a,Point& b,Point& c,Point& d)
//	{
//		cout << "A: <" << a.x << "," << a.y << ">" << endl;
//		cout << "B: <" << b.x << "," << b.y << ">" << endl;
//		cout << "C: <" << c.x << "," << c.y << ">" << endl;
//		cout << "D: <" << d.x << "," << d.y << ">" << endl;
//	} 
//	void Area(Point& a, Point& b, Point& c, Point& d)
//	{
//		int Long = fabs(a.x - b.x);
//		int wide = fabs(a.y-c.y);
//		cout << "矩形的面积为: " << Long*wide << endl;
//	}
//};
//int main()
//{
//	Point pA(-10, 50);
//	Point pB(80, 50);
//	Point pC(-10, 0);
//	Point pD(80, 0);
//
//	Rectangle s;
//	s.print(pA,pB,pC,pD);
//	s.Area(pA,pB,pC,pD);
//	return 0;
//}
//class AA
//{
//public:
//	void a();
//};
//
//int main()
//{
//	AA x;
//	x.a();
//	return 0;
//}