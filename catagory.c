#include <stdbool.h>
#include<stdio.h>
#pragma once\

typedef int Elemtype;
//1 ���Ա�

//1.1 ˳���
//1.1.1 ��̬
#define MAXSIZE 100
typedef struct {
	Elemtype data[MAXSIZE];
	int length;
}Sqlist;
//1.1.2 ��̬
typedef struct{
	Elemtype *data;
	int MaxSize,length;
}Seqlist;

//1.2����
//1.2.1����
typedef struct LinkNode {
	Elemtype data;
	struct LinkNode* next;

 }LinkNode, *LinkList;

//1.2.2˫��
typedef struct LNode {
	Elemtype data;
	struct LNode *rear,*next;

}LNode, * LList;

