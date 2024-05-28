#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d",&a, &b);
    printf("%d and %d ",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping: %d and %d\n",a,b);
    return 0;
}