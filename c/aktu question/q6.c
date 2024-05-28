// 6.	Write a program that checks whether the two numbers entered by the user are equal or not.
#include<stdio.h>
int main(){
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    int b;
    printf("enter second number ");
    scanf("%d",&b);
    if(a==b){
        printf("number is same");
    }
    else{
        printf("diff number");
        
    }
}