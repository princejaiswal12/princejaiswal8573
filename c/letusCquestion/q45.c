// Given the coordinates (x, y) of center of a circle and its 
// radius, write a program that will determine whether a point 
// lies inside the circle, on the circle or outside the circle. (Hint: 
// Use sqrt( ) and pow( ) functions
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    int x,y,r,x1,y1;
    scanf("%d %d %d %d %d",&x,&y,&r,&x1,&y1);
    int z=pow((x1-x),2)+pow((y1-y),2);
    int e=r*r;
    if (z>e)
    {
        printf("Point lies outside the circle");
    }
    else if (z==e)
    {
        printf("Point lie on the circle");
    }
    
    else if (z<e)
    {
        printf("Point lie inside the circle");


    }
    
    else
    {
        printf("You entered the wrong input");
    }
    getch();
    system("cls");    
    return 0;
}
