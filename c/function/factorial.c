#include<stdio.h>
void fact(int a){
    int fac=1;
    for (int i=1; i<=a;i++)
    {
        fac=fac*i;
    }
    printf("%d \n",fac);
    
}
int main(int argc, char const *argv[])
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    for (int  i = 1; i <=n; i++)
    {
        printf("%d :- ",i);
        fact(i);
        
    }
    
    
    return 0;
}
