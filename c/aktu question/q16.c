#include<stdio.h>
int main(int argc, char const *argv[])
{
    // 16.	Write a program to check whether the entered number is prime or not.
    int n;
    printf("enter a numb");
    scanf("%d",&n);
    int a=0;
    for (int i = 2; i <=n-1; i++)
    {
        if(n%2==0){
            a=1;
            break;
        }
        else a=0;
    }
    if(n==1){
        printf("no");
    }
    else if(a==0) printf("prime");
    else printf("comp");
    
    return 0;
}
