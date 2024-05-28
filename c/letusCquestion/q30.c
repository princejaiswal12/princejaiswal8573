// If value of an angle is input through the keyboard, write a 
// program to print all its Trigonometric ratios.
#include<stdio.h>
#include<math.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    float angle;
    printf("enter angle");
    scanf("%f",&angle);
    angle=angle*3.14/180;
    float s=sin(angle),c=cos(angle),t=tan(angle);
    printf("%f %f %f",s,c,t);
    
return 0;
}