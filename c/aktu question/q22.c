// 22.	Write a program that inputs two arrays and saves the sum of corresponding elements of these arrays in a third array and prints them.
#include<stdio.h>
int main(){
    int n;
    printf("enter size of array ");
    scanf("%d",&n);
    int arr[n],brr[n],crr[n];
    printf("enter %d elements of 1st array \n",n);
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);    
    }
    printf("enter %d elements of 2nd array \n",n);
    for(int i=0;i<=n-1;i++){
        scanf("%d",&brr[i]);
    }
    for(int i=0;i<=n-1;i++){
         crr[i]=arr[i]+brr[i];
    }
    printf("sum of %d elements of array is",n);
    for(int i=0;i<=n-1;i++){
        printf("%d ",crr[i]);
    }
     
}