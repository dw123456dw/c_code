#include "MyArray.hpp"

void test()
{
	MyArray<int> arr(5);
	arr.Push_Back(1);
	arr.Push_Back(2);
	arr.Push_Back(3);
	arr.Push_Back(4);
	arr.Push_Back(5);
	arr.print();
	arr.Pop_Back();
	arr.Pop_Back();
	arr.Pop_Back();
	arr.print();
}

int main()
{
	test();

	return 0;
}




