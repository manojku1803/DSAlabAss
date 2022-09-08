#include<stdio.h>
int main(){
	printf("enter the number which you want factorial of ");
	int n;
	scanf("%d",&n);
	int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("factorial of %d is %d ",n,fact);
	return 0;
}
