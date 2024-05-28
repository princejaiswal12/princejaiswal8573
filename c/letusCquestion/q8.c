// ans = 5 * b * b * x - 3 * a * y * y - 8 * b * b * x + 10 * a * y ;
// (a = 3, b = 2, x = 5, y = 4 assume ans to be a int)
#include<stdio.h>
int main(){
    int a=3,b=2,x=5,y=4;
    int ans = 5 * b * b * x - 3 * a * y * y - 8 * b * b * x + 10 * a * y ;
    //5*2*2*5-3*3*4*4-8*2*2*5+10*3*4
    //100-144-160+120=220-304=-84
    printf("%d",ans);
}