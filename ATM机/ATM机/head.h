#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define N 3

struct day
{
	int Year;
	int Month;
	int Day;
};


typedef struct people
{
	char Name[20];
	char AccountID[10];
	int Password;
	struct day data;
	int money;
}accountdata;


void writetofile(accountdata data[],int n);                                         //д�ļ�
void readfile(accountdata data[], int n);                                           //���ļ�
void test(accountdata data[]);                                                      //���Ժ���
int searchpassword(accountdata data[], int password);                               //��������
int searchID(accountdata data[], char* ID,int* location);                           //�����˺�
void checkmoney(accountdata data[], int location);                                  //��ѯ���
void withdraw(accountdata data[],int location);                                     //ȡ��
void deposit(accountdata data[],int location);                                      //���
void transfermoney(accountdata data[],int location,int translocation);              //ת��
void changepassword(accountdata data[],int location);                               //������
void savehistory(accountdata data[],int i,int location,int money);                  //��¼��־ 
