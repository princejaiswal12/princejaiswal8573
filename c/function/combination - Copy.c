#include<stdio.h>
int fact(int x){
    int fac=1;
    for(int i=1;i<=x;i++){
         fac=fac*i;
    }
    
    return fac;
}
int combnation(int n,int r){
    return fact(n)/(fact(n-r)*fact(r));
}
int main()
{
    int n;
    scanf("%d",&n);
    int r;
    scanf("%d",&r);
    int comb=combnation(n,r);  
    printf("%d",comb);   
}