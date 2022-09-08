#include<stdio.h>
int main(){
	int a,b;
	printf("enter the size of two arrays. ");
    scanf("%d%d",&a,&b);
	int a1[a],a2[b];
	printf("enter the elements of first array ");
	for(int i=0;i<a;i++){
		scanf("%d",&a1[i]);
	}
		printf("enter the elements of second array ");

	for(int j=0;j<b;j++){
		scanf("%d",&a2[j]);
	}
	int max;
	if(a>b){
		max=a;
	}else max=b;
	int a3[max];
	for(int i=0;i<max;i++){
		a3[i]=0;
	}
	for(int i=0;i<a;i++){
		a3[i]+=a1[i];
	}
	for(int j=0;j<b;j++){
		a3[j]+=a2[j];
	}printf("the sum is ");
	for(int i=0;i<max;i++){
		printf("%d ",a3[i]);
	}
	return 0;
}
