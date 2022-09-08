#include<stdio.h>
int main(){
	int n;
	int a=0,b=1;
	printf("enter how many terms ");
	scanf("%d",&n);
	printf("fibonnaci series is ");
	if(n==1){
		printf("%d",a);
	}
	if(n==2){
		printf("%d %d",a,b);
	}	
	if(n>2){
	printf("%d %d ",a,b);

	for(int i=1;i<n-1;i++){
		int c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}}
	return 0;
}
