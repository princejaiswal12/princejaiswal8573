
#include<stdio.h>
void hcf(int a,int b){
    if(a<b)
    {
    for ( int i=2; i<=a; i++)
    {
        if(a%i==0&&b%i==0){
            printf("%d ",i);
        }
    }
    }
    if(a>b)
    {
    for ( int i=2; i<=b; i++)
    {
        if(a%i==0&&b%i==0){
            printf("%d ",i);
        }
    }
    }
    return;
    
    
}
int main(int argc, char const *argv[])
{
    int n,m;
    printf("enter a number ");
    scanf("%d %d",&n,&m);
    hcf(n,m);
    return 0;
}
