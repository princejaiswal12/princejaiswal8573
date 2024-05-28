#include<stdio.h>
int main()
{
    int sp,cp;
    printf("Enter the value of sp and cp: ");
    scanf("%d %d",&sp, &cp);
    if(sp>cp){
        printf("profit");
    }
    else if(cp>sp){
        printf("loss");
    }
    else{
        printf("no profit,no loss");
    }
}