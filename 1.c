#include<stdio.h>
int main(){
	int a,b;
	char op;
	printf("enter the first number ");
	scanf("%d",&a);
	printf("enter the second number ");
	scanf("%d",&b);
	printf("enter which operations +,-,*,/ ");
	scanf(" %c",&op);
	switch(op){
	case '+': {
		printf("sum is %d ",a+b);
		break;
	}case '-': {
		printf("difference is %d ",a-b);
		break;
	}case '*': {
		printf("multiplication is %d ",a*b);
		break;
	}case '/': {
		printf("division is %d ",a/b);
		break;
	}
	}
	return 0;
}
