#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter x=");
    scanf("%d",&x);
    printf("Enter y=");
    scanf("%d",&y);
    printf("enter z=");
    scanf("%d",&z);
    if(x>y && x>z){
        printf("Greatest Number =%d",x);
    }
    if(y>x && y>z){
        printf("Greatest Number =%d",y);
    }
    if(z>x&&z>y)
    {printf("Greatest Number =%d",z);}
    else printf("number is same=%d",x);
    return 0;
}