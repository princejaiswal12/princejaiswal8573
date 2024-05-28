#include<stdio.h>
int fabi(int n){
     int a=1,b=1,fab;
    printf("%d %d ",a,b);
    for (int i=1;i<=n;i++)
    {
       fab=a+b;
       a=b;
       b=fab;
       
       printf("%d ",fab);
    }
}
int main(int argc, char const *argv[])
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    fabi(n);
   
    
    return 0;
}
