#pragma once
#include <stdio.h>

#define SIZE 100
#define OK 1
#define ERROR 0


typedef struct 
{
	int arr[SIZE];
	int last;
}SeqList;


int SearchSeqList(const SeqList L,int e);                               //�ڱ��в���e�ҵ�����e���±���򷵻�-1
int InsertSeqList(SeqList* L,int i,int e);                              //�ڱ��е�i��Ԫ��֮ǰ����e���ɹ�����OK��ʧ�ܷ���ERROER
int DelSeqList(SeqList* L,int i);                                       //ɾ�����е�i��λ�õ�Ԫ�أ�����eָ�뷵����ֵ
void MergeSeqList(SeqList* LA,SeqList* LB,SeqList* LC);                 //�����������ϳ�һ���µ�����ı�

