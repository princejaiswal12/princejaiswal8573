#include<stdio.h>
int main()
{//fibonacci num=1,1,2,3,5,8,13,21,34,55.....
               //1,2,3,4,5,6,7, 8, 9, 10...
    int a=0,b=1,sum ,n;   
    printf("enter a number = ");
    scanf("%d",&n); 
    for(int i=1;i<=n-2;i++){//n-2 for n term
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }
    
    
}