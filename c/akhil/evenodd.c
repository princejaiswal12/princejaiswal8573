#include<stdio.h>
int main()
{
    printf("Enter number");
    int number;
    scanf("%d",&number);
    number %4==0 && number%100!=0? printf("Even"): printf("Odd");
    return 0;
}