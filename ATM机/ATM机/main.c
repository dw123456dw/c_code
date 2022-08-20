#include "head.h"




int main()
{
	accountdata data[N] = { {"zhangsan","21061231",111111,{2022,6,4},1000},
							{"lisi","21061232",222222,{2003,6,13},9999},
							{"wangwu","21061233",333333,{2000,9,7},20000}};     //创建数组人

	writetofile(data,N);
	readfile(data,N);
	test(data);
	return 0;
}

