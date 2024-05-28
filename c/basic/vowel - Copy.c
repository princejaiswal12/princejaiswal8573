#include<stdio.h>
//cosnsider every forth year is a leap year
int main()
{ 
    int x;
    
    printf("Enter the number of years: ");
    scanf("%d",&x);
    if(x%4==0){
        printf("\nThe given year is a leap year.");
    }
    else printf("not a leap year");

}