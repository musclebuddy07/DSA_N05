#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	if(n < 2){
		printf("Khong la so nguyen to");
		return 0;
	}
	int check = 1;
	for(int i = 2; i <= (int)sqrt(n); i++){
		if(n % i == 0){
			printf("Khong la so nguyen to");
			check = 0;
			break;
		}
	}
	if(check == 1){
		printf("La so nguyen to");
	}
	return 0;
}
