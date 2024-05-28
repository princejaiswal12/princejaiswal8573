#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x%3==0||x%5==0){
        printf("\nThe number is divisible by 3 or 5");
    
    }
}