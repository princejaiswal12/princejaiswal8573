#include<stdio.h>
int main()
{
    int cp;
    printf("Enter the cost price");
    scanf("%d",&cp);
    int sp;
    printf("enter The SP");
    scanf("%d",&sp);
    if(sp>cp){
        printf("The profit is %d",sp-cp);
    }
    else{
        printf("Sorry, there is no profit");
    }
}