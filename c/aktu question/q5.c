// 5.	Write a program that swaps the values of two variables using a third variable.
#include<stdio.h>
int main(){
    int a;
    printf("enter first number");
    scanf("%d",&a);
    int b;
    printf("enter second number ");
    scanf("%d",&b);
    int temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
}