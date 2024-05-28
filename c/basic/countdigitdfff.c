#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",n);
    int ld=0;
    while(n!=0){
        n=n/10;
        ld++;
    }
    printf("%d",ld);
    return 0;
}