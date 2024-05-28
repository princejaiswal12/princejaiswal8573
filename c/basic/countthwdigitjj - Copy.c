#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int count=0;
    while (n!=0)
    {
        count++;
        n=n/10;
        
    }
    printf("%d",count);
    
    
}