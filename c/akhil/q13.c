///WAP to print factorial of a number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter  the number to find factorial\n");
    scanf("%d",&n);
    int fact =1;
    for(int i=1;i<=n;i++)
    {
       fact =fact*i; 
    }
    printf("%d",fact);



}