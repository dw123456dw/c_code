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


void writetofile(accountdata data[],int n);                                         //写文件
void readfile(accountdata data[], int n);                                           //读文件
void test(accountdata data[]);                                                      //测试函数
int searchpassword(accountdata data[], int password);                               //查找密码
int searchID(accountdata data[], char* ID,int* location);                           //查找账号
void checkmoney(accountdata data[], int location);                                  //查询余额
void withdraw(accountdata data[],int location);                                     //取款
void deposit(accountdata data[],int location);                                      //存款
void transfermoney(accountdata data[],int location,int translocation);              //转账
void changepassword(accountdata data[],int location);                               //改密码
void savehistory(accountdata data[],int i,int location,int money);                  //记录日志 
