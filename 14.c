#include<stdio.h>
void swap(int *p,int* q){
	int temp = *p;
	*p=*q;
	*q=temp;
}
int main(){
	int a,b;
	printf("enter two numbers ");
	scanf("%d%d",&a,&b);
	printf("the swapped values are ");
	swap(&a,&b);
	printf("%d %d",a,b);
	return 0;
}
