// If a five-digit number is input through the keyboard, write a 
// program to reverse the number
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int reverse=0;
    for (int i = 1; n>0; i++)
    {
        int j=n%10;
        n=n/10;
        reverse=reverse*10+j;

    }
    printf("%d",reverse);
    
return 0;
}