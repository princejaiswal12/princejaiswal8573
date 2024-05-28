// Write a program to receive Cartesian co-ordinates (x, y) of a 
// point and convert them into polar co-ordinates (r, Q)
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    float x,y;
    printf("enter x & y");
    scanf("%f %f",&x,&y);
    int r=sqrt(x*x+y*y);
    float Q=atan(y/x);
    
    printf("%d %f",r,Q);
return 0;
}