#pragma once
#include <stdio.h>
#include <stdlib.h>


typedef struct Person                     //����һ���˵Ľṹ��
{
	int PersonID;
	int Password;
	int money;
}PERSON;


void test();                               //���Ժ���
void account();                            //��ʼ��ATM�������
void changepassword();                     //�޸����� 
void writetofile(PERSON p[], FILE* fp);    //д���ļ�
void login(PERSON p[]);