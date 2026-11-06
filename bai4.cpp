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
	Node *pHead, Node *pTail;
	int spt;
}LList;
void initList(LList *L){
	L->pHead = NULL;
	L->pTail = NULL;
	L->spt = 0;
}
Node* getNode(Data x){
	Node *p = (Node*)(malloc(sizeof(Node)));
	if(p === NULL){
		return NULL;
	}
	p->infor= x;
	p->Link = NULL;
	return p;
}
void insertLast(LList *L, Node *p) {
    if (p == NULL)
        return;

    if (L->pHead == NULL) {
        L->pHead = p;
        L->pTail = p;
    } 
	else {
        L->pTail->Link = p;
        L->pTail = p;
    }
    L->spt++;
}
int main() {
    LList L;
    Data x;
    Node *p;
    int n;
    initList(&L);
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nNhap sinh vien thu %d:\n", i + 1);
        nhap(&x);
        p = getNode(x);
        insertLast(&L, p);
    }
    xuat(L);
    return 0;
}
