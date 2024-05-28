#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");//an=a+(n-1)dhere a=4&d=3so an=3n+1
    scanf("%d",&n);
    for(int i=4;i<=3*n+1;i=i+3){
        printf("%d ",i);
    }
}