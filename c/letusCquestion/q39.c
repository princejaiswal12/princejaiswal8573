// If cost price and selling price of an item is input through the 
// keyboard, write a program to determine whether the seller has 
// made profit or incurred loss. Also determine how much profit 
// he made or loss he incurred
#include<stdio.h>
int main(){
    int sp,cp;
    scanf("%d %d",&sp,&cp);
    if(sp>cp){
        printf("profit is %d",sp-cp);
    }

}