// 34.	Write a program to swap two elements using the concept of pointers.
#include<stdio.h>
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    int m;
    printf("Enter a number ");
    scanf("%d",&m);
    swap(&n,&m);
    printf("%d %d",n,m);
    
}