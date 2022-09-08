#include<stdio.h>
int main(){
	int n,sume=0,sumo=0;
	printf("enter the number ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==0){
			sume=sume+i;
		}else {
		sumo=sumo+i;
	}}
	printf("sum of even and odd numbers upto %d is %d and %d respectively ",n,sume,sumo);
return 0;
}
