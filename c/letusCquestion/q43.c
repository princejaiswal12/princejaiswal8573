// Given three points (x1, y1), (x2, y2) and (x3, y3), write a 
// program to check if all the three points fall on one straight 
// line
#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    if((y2-y1)/(x2-x1)==(y3-y2)/(x3-x1)){
        printf("lie in same line");
    }
    else printf("not");
}