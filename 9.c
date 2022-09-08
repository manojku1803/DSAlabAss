#include<stdio.h>
int main(){
	int n,x,sum=0,b;
	printf("enter the number ");
	scanf("%d",&n);
	b=n;
	while(n!=0){
		x=n%10;
		n=n/10;
		sum=sum+(x*x*x);
	}if(sum==b){
		printf("%d is an armstrong number ",b);
	}else printf("%d is not an armstrong number ",b);
}
