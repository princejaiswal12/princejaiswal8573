#include<stdio.h>
int main()
{
    int a,b,q,r;
    printf("Enter the value of a \n");
    scanf("%d",&a);
    printf("Enter the value of b \n");
    scanf("%d",&b);
     q=a/b;
     r=a-(b*q);
    printf("quotient is %d",q);
    printf("\n remainder is %d",r);
    
}