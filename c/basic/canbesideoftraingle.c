
#include<stdio.h>
int main()
{
    int s,b,c;
    printf("Enter the values of a,");
    scanf("%d",&s);
    printf("enter the value");
    scanf("%d",&b);
    printf("enter tha value of c");
    scanf("%d",&c);
    if(s+b>c&&b+c>s&&c+s>b){
        printf("The triangle is valid.");
    }
}