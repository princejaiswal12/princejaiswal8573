#include<stdio.h>
int power(int n,int x){
    if(x==0) return n;
    if(x%2==0) return power(n,x/2)*power(n,x/2);
    if(x%2!=0) return n*power(n,(x-1)/2)*power(n,(x-1)/2);
    return 0;
}
int main(){
    int n,x;
    printf("enter a number");
    scanf("%d %d",&n,&x);
    printf("%d",power(n,x));
    return 0;
}