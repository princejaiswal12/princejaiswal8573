#include<stdio.h>
int main(){
    int n,d1,d2,d3,d4,d5;
    long int revnum;
    printf("enter a five degit number ");
    scanf("%d",&n);
    d5=n%10;
    n=n/10;
    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;
    revnum=d5*10000+d4*1000+d3*100+d2*10+d1;
    printf("%ld",revnum);
    
    return 0;



}
