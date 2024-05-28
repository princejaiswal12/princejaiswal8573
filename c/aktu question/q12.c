#include<stdio.h>
//Write a program to print the sum of all numbers up to a given number.
int main()
{
    int n,sum =0;
    printf("enter a number");
    scanf("%d",&n);
    for(int i;i<=n;i++){
        sum =sum +i;
    }
    printf("the sum of %d number is %d",n,sum);
}