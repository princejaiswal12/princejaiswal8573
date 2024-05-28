// 23.	Write a program to find the minimum and maximum elements of the array.
#include<stdio.h>
#include<limits.h>
int main(){
     int n;
    printf("enter size of array ");
    scanf("%d",&n);
    int arr[n];
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max) {
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }

    }
    printf(" maximum element is %d \n",max);
    printf("min element  is %d",min);
    

}