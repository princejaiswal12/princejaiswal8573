#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%3==0&&x%5==0){
        printf("number is divisible by both 3 and 5");
    }
}