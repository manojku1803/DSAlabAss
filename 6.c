#include<stdio.h>
int main(){
	int n,i,count=0;
	printf("enter a number ");
	scanf("%d",&n);
	for( i=2;i<n;i++){
		if(n%i==0){
			printf("%d is not a prime number.",n);
			break;
		}
		count++;
	}
	if(count==n-2){
	printf("%d is a prime number ",n);
}
	return 0;
}
