#include <stdbool.h>
#include<stdio.h>
#pragma once\

typedef int Elemtype;
//1 线性表

//1.1 顺序表
//1.1.1 静态
#define MAXSIZE 100
typedef struct {
	Elemtype data[MAXSIZE];
	int length;
}Sqlist;
//1.1.2 动态
typedef struct{
	Elemtype *data;
	int MaxSize,length;
}Seqlist;

//1.2链表
//1.2.1单向
typedef struct LinkNode {
	Elemtype data;
	struct LinkNode* next;

 }LinkNode, *LinkList;

//1.2.2双向
typedef struct LNode {
	Elemtype data;
	struct LNode *rear,*next;

}LNode, * LList;

