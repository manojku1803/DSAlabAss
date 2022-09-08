#include<stdio.h>
int main(){
	int a,b,sum=0;
	printf("enter the order of matrix ");
	scanf("%d%d",&a,&b);
	int mat[a][b];
	printf("enter the elemnets ");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			scanf("%d",&mat[i][j]);
			if(i==j){
				sum+=mat[i][j];
			}
		}
	}
	printf("sum of diagonal elements is %d ",sum); 
}
