#include "head.h"



//˳���
void CreatSqlist(Sqlist* L,Elemtype data[],int length) {//˳�����
	for (int i = 0; i < length ; i++) {
		L->data[i] = data[i];
	}
	L->length = length;
}
bool SqlistInsert(Sqlist* L, int i,Elemtype e) {//˳������Ԫ��
	if (i<1 || i>L->length + 1)
		return false;
	if (L->length == MAXSIZE)
		return false;
	for (int j = L->length; j >= i; j--) 
		L->data[j] = L->data[j - 1];		
	L->data[i-1] = e;
	L->length++;
	return true;
}
bool SqlistDelete(Sqlist* L, int i, Elemtype* e) {//˳���ɾ��Ԫ��
	if (i<1 || i>L->length)
		return false;
	if (L->length==0)
		return false;
	*e = L->data[i - 1];
	for (int j = i; j <L->length; j++)
		L->data[j - 1] = L->data[j];
	L->length--;
	return true;
}
////--------------------------------------------------------------------
//
////������
LinkList LIst_HeadInsert(LinkList L); {//���������
	;
}