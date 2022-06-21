#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#define max_name 10
#define max_sex 10
#define max_tele 12
#define max_addr 20
#define DEFAULT_sz 3
//#define max 100
enum input
{
	e,
	add,
	del,
	search,
	modify,
	show,
	sort,
	save
};
struct peoinfo//描述人的信息
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
};
struct contact//通讯录类型，加个size方便计数
{
	struct peoinfo* data;
	int size;
	int capacity;//记录通讯录容量
};
//函数声明
void initcontact(struct contact* ps);//初始化通讯录
//增加人
void addcontact(struct contact* ps);
//删除人
void delcontact(struct contact* ps);
//打印信息
void showcontact(const struct contact* ps);
//查询
void searchcontact(const struct contact* ps);
//修改信息
void modifycontact(struct contact* ps);
//销毁通讯录
void destorycontact(struct contact* ps);
//文件存放
void savecontact(struct contact* ps);

void loadcontact(struct contact* ps);


