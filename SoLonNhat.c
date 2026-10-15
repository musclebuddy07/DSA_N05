
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=a[0];
	int i=0;
	while(i<n){
		if(a[i]>max){
			max=a[i];
		}
		i++;
	}
	printf("%d",max);
	return 0;
}
