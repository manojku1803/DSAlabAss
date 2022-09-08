//reverse 
#include<stdio.h>
int main(){
	printf("enter the number ");
	int n;
	scanf("%d",&n);
int r=0,s;
	while(n!=0){
		s=n%10;
		n=n/10;
		r=r*10+s;
	}
	printf("reverse order is %d ",r);
}
