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


int SearchSeqList(const SeqList L,int e);                               //在表中查找e找到返回e的下标否则返回-1
int InsertSeqList(SeqList* L,int i,int e);                              //在表中第i个元素之前插入e，成功返回OK，失败返回ERROER
int DelSeqList(SeqList* L,int i);                                       //删除表中第i个位置的元素，并用e指针返回其值
void MergeSeqList(SeqList* LA,SeqList* LB,SeqList* LC);                 //将两个有序表合成一个新的有序的表

