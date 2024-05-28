// 3.	Write a program to calculate the area and circumference of a circle.
#include<stdio.h>
int main()
{
    int r,pi=3.14;
    printf("enter the radius");
    scanf("%d",&r);
    int area, circumference;
    area = pi*r*r;
    circumference=2*pi*r;
    printf("area of circle is %d\n",area);
    printf("circumference of circle is %d",circumference);
}