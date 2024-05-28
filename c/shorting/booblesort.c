// 25.	Write a program to sort the elements of the array in ascending order using the Bubble Sort technique.
#include<stdio.h>
int main(){
    int n;
    printf("enter a number of element of array ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        int flag= 1;
       for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag =0;
        }
       }
       if(flag==1) break;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
    
}