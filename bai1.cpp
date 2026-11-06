#include<stdio.h>
#include<stdlib.h>
void nhap(float *p , int n){
	for ( int i = 0; i < n; i++){
		scanf("%f", &p[i] );
	}
}
void in( float *p, int n ){
	for ( int i = 0; i < n; i++){
		printf("%f ", p[i]);
	}
}
int main(){
	int n;
	printf("Nhap so phan tu can nhap: ");
	scanf("%d", &n);
	if (p = NULL){
		printf("Khong du bo nho");
		return 0;
	}
	float *p = (float*)malloc(n*sizeof(float));
	nhap(p,n);
	in(p,n);
}
