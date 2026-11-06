#include<stdio.h>
#include<stdlib.h>
int main(){
	int h,c;
	printf("Nhap so hang va cot: ");
	scanf("%d %d", &h,&c);
	int **ma = (int**)malloc(h*sizeof(int*));
	if(ma == NULL){
		printf("Khong du bo nho");
		return 1;
	}
	for (int i = 0; i < h; i++){
		ma[i] = (int*)malloc(c*sizeof(int));
		if(ma[i] == NULL){
			printf("Khong du cho");
			return 1;
		}
	}
	for ( int i = 0; i < h; i++){
		for (int j = 0; j < c;j++){
			scanf("%d", &ma[i][j]);
		}
	}
	printf("Ma tran %dx%d vua tao: \n",h,c);
	for(int i = 0; i < h; i++){
		for( int j = 0; j < c; j ++){
			printf("%d\t",ma[i][j]);
		}
		printf("\n");
	}
}
