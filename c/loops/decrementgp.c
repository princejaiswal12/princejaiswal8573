#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    float a=100.0;
    for(int i=1;i<=n;i++){
        printf("%f ",a);
        a=a*(1.0/2.0);
    }
    return 0;
}