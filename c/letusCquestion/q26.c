// If lengths of three sides of a triangle are input through the 
// keyboard, write a program to find the area of the triangle
#include <stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    float area;
    float sp;
    printf("enter the three side of triangle");
    scanf("%d %d %d",&a,&b,&c);
    sp=(a+b+c)/2;
    area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("%f",area);
return 0;
}