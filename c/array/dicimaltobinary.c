#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,r,d=0,base =1;
    printf("enter a number ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        r=n%2;
        n=n/2;
         d=d*10;
        d=d+(r*base);
       

    }
    printf("%d",d);
    return 0;
}
