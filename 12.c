//search
#include <stdio.h>

int main()
{
    int n;
printf("enter how many numbers ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the %d elemnts ",n);
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }int x,y=0;
    printf("which number you wanna search for ");
    scanf("%d",&x);
    for (int i = 0; i < n; i++) {
    if(arr[i]==x){
        y=i;
        break;
    }        
    }if(y==0){
        printf("%d not found ",x);
    }else{
        printf("%d is at %dth position ",x,y+1);
    }
    
    return 0;
}


