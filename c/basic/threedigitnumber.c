#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a>99 && a<1000){
        printf("number is three digit number");

    }
    else printf("not a three digit number");
}