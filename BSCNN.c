#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<=0||b<=0){
		printf("Nhap sai du lieu");
	} 
  	else{
		int x=a;
		int y=b;
		int temp,uscln;
		while(y!=0){
			temp=x%y;
			x=y;
			y=temp;
			uscln=x;
		}
		int bscnn=(a*b)/uscln;
		printf("%d",bscnn);
	}
	return 0;
}
