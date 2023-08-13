
#include "head.h"

#define LINKNODE
int main(){
#if defined (SQLIST) //Ë³Ðò±í
	Sqlist L;
	int m = 0;
	int arr[10] = { 4,2,8,2,7,5,4,9,2,5 };
	CreatSqlist(&L,arr,10);
	for (int i = 0; i <L.length; i++) {
		printf("%d ", L.data[i]);
	}
	printf("\n");
	SqlistDelete(&L,1,&m);
	for (int i = 0;  i < L.length; i++) {
		printf("%d ", L.data[i]);
	}
	printf("%d ", m);

#elif defined(LINKNODE)	//Á´±í

#endif

	return 0;
}

