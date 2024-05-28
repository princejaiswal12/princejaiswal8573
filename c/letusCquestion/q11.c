// R = x * x + 2 * x + 1 / 2 * x * x + x + 1 ;
// (x = 3.5, assume R to be an float)
#include<stdio.h>
int main(){
    float x=3.5;
    float R = x * x + 2 * x + 1 / 2 * x * x + x + 1;
    //3.5*3.5+2*3.5+1/2*3.5*3.5+3.5+1=12.25+7+0.0+3.5+1=
    float s=1 / 2 * x * x;
    printf("%f\n",s);
    printf("%f",R);
}