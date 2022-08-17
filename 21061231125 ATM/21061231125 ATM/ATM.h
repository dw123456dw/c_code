#pragma once
#include <stdio.h>
#include <stdlib.h>


typedef struct Person                     //创建一个人的结构体
{
	int PersonID;
	int Password;
	int money;
}PERSON;


void test();                               //测试函数
void account();                            //初始化ATM里面的人
void changepassword();                     //修改密码 
void writetofile(PERSON p[], FILE* fp);    //写到文件
void login(PERSON p[]);