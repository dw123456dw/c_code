#include <stdio.h>

//a说不是我 
//b说是c
//c说是d
//d说c在胡说
//已知他们说的为三真一假，代码实现寻找凶手      答案为c


int main()
{
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("killer=%c",killer);
		}
	}
	return 0;
}