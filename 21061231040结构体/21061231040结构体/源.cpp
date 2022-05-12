#include <stdio.h>

struct stu
{
	char name[20];
	int age;
	char id[20];
};
//创建结构体类型
int main()
{
	//创建结构体对象
	struct stu dw = {"丁哥哥",20,"21061231"};
	struct stu* ps = &dw;
	printf("%s\n",dw.name);
	printf("%d\n", dw.age);
	printf("%s\n", dw.id);
	return 0;
	//printf("%d\n",(*ps).age);
	//printf("%d",ps->age);
	// 
	// 
	// 
	// 
	//三种方法
}