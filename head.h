#include"catagory.c"

#pragma once\

//1 线性表

//1.1 顺序表
void CreatSqlist(Sqlist* L, Elemtype data[], int length);//顺序表创建
bool SqlistInsert(Sqlist* L,int i, Elemtype e);//顺序表插入元素
bool SqlistDelete(Sqlist* L, int i, Elemtype* e);//顺序表删除元素
 
//1.2单链表
LinkList LIst_HeadInsert(LinkList L);//头插法