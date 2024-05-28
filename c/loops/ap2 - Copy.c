#include<stdio.h>
int main()
{
    int n;//kitna baar loop chalaga 
    printf("enter a number");
    scanf("%d",&n);
    //4 7 10 13 16 ....up to n terms
    //we are going to use extra variables 
    int a = 4;
    for(int i=1;i<=n;i=i++){
        printf("%d ",a);
        
    }
}