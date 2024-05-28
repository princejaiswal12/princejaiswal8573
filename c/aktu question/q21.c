// 21.	Write a program that simply takes elements of the array from the user and finds the sum of these elements.
#include<stdio.h>
int main(){
    int n;
    printf("enter size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements of array",n);
    int sum=0;
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
         sum=sum+arr[i];
    }
    printf("sum of %delements of array is %d",n,sum);
     
}