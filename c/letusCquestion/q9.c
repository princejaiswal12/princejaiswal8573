// res = 4 * a * y / c - a * y / c ;
// (a = 4, y = 1, c = 3, assume res to be an int
#include<stdio.h>
int main(){
    int a=4,y=1,c=3;
    int res = 4 * a * y / c - a * y / c ;
    //4*4*1/3-4*1/3=5-1=4
    printf("%d",res);
}