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
    }
    int max=0,min=0;
    for (int i = 0; i < n; i++) {
        if(arr[i]>arr[max]){
            max=i;
        }if(arr[i]<arr[min]){
            min=i;
        }
    }printf("smallet number is %d and largest number is %d ",arr[min],arr[max]);
    return 0;
}


