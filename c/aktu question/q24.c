// 24.	Write a program to search an element in an array using Linear Search.
#include<stdio.h>
int main(){
    int m;
    printf("enter size of array");
    scanf("%d",&m);
    int arr[m];
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }
    int n;
    printf("enter any number ");
    scanf("%d",&n);
    for(int i=0;i<m;i++){
        if(arr[i]==n){
            printf("given number is present in array");
            break;
        }
        else {
            printf("not present");
            break;
        }
    }
}