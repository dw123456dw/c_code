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
struct peoinfo//�����˵���Ϣ
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
};
struct contact//ͨѶ¼���ͣ��Ӹ�size�������
{
	struct peoinfo* data;
	int size;
	int capacity;//��¼ͨѶ¼����
};
//��������
void initcontact(struct contact* ps);//��ʼ��ͨѶ¼
//������
void addcontact(struct contact* ps);
//ɾ����
void delcontact(struct contact* ps);
//��ӡ��Ϣ
void showcontact(const struct contact* ps);
//��ѯ
void searchcontact(const struct contact* ps);
//�޸���Ϣ
void modifycontact(struct contact* ps);
//����ͨѶ¼
void destorycontact(struct contact* ps);
//�ļ����
void savecontact(struct contact* ps);

void loadcontact(struct contact* ps);


