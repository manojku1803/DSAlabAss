#include<stdio.h>
int main(){
	int n,sum=0;
	printf("enter the number up to which you want sum of ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("sum is %d",sum);
}
