//sort
#include <stdio.h>

int main()
{
   int n;
printf("enter how many numbers ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the %d elements ",n);
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);}
for (int i = 0; i < n-1; i++) {
    for (int j = 1; j <n-i ; j++) {
        if(arr[j-1]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }
    }
}
printf("Sorted array is \n");
for (int i = 0; i < n; i++) {
    printf("%d ",arr[i]);
}


    return 0;
}


