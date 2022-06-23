#include <stdio.h>
#define OFFSETOF(struct_name,struct_number)  (int)&((struct_name*)0)->struct_number
struct s
{
	char a;
	int b;
	char c;
};
int main()
{
	int ret = OFFSETOF(struct s, c);
	printf("%d",ret);
	return 0;
}