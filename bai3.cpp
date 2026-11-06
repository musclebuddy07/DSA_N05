#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char hoten[50];
	int ma;
	float d1,d2,d3;
}SV;
void Nhap(SV *p, int n ){
	for ( int i = 0; i < n ; i++){
		scanf("%[^\n]\t %d\t %f\t %f\t %f", p[i].hoten, &p[i].ma, &p[i].d1, &p[i].d2, &p[i].d3);
	}
}
void In(SV *p, int n){
	for ( int i =0 ; i < n ; i++){
		printf("%s %d %.2f %.2f %.2f\n",p[i].hoten, p[i].ma, p[i].d1, p[i].d2, p[i].d3);
	}
}
int main(){
	int n;
	printf("Nhap so sinh vien");
	scanf("%d", &n);
	SV *DSSV = (SV*)malloc(n * sizeof(SV));
	if (DSSV == NULL){
		printf("Khong du bo ");
		return 1;
	}
	Nhap(DSSV, n);
	In(DSSV, n);
	free(DSSV);
}
