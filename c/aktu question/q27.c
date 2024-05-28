// 27.	Write a program that finds the sum of diagonal elements of a m x n matrix.
#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    //1 2 3
    //1 2 3
    //1 2 3
    int n=0;
    for(int i=0;i<3;i++){
        n=n+arr[i][i];
    }
    printf("%d",n);
}