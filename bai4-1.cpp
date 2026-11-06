#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char hoten[50];
	int ma;
	float d1, d2, d3;
}Data;
typedef struct tagNode{
	Data infor;
	struct tagNode *Link;
}Node;
typedef struct{
	Node *pHead, *pTail;
	int spt;
}LList;
void initList(LList *L){
	L->pHead = NULL;
	L->pTail = NULL;
	L->spt = 0;
}
