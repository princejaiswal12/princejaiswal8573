// 17.	Write a program to find the sum of digits of the entered number.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter a numb");
    scanf("%d",&n);
    int l=0,sum=0;
    for (int i = 1; i <=5; i++)
    {

        l=n%10;
        n=n/10;
        sum=sum+l;
        
        
    }
    printf("%d",sum);
    
    
    return 0;
}
