#include <stdio.h>

struct stu
{
	char name[20];
	int age;
	char id[20];
};
//�����ṹ������
int main()
{
	//�����ṹ�����
	struct stu dw = {"�����",20,"21061231"};
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
	//���ַ���
}