#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter length of the rectangle: ");
    scanf("%d",&l);
    printf("\nEnter breadth of the rectangle: ");
    scanf("%d",&b);
    if((l*b)>(2*l+2*b)) {
        printf("\nThe area is greater than peremeter");
    }
    

}