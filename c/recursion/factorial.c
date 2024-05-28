#include<stdio.h>
int factorial(int x){
    if(x==1 ||x==0) return 1; //base case
    return x*factorial(x-1);
}
int main(){
    int n;
    printf("enter a numbe ");
    scanf("%d",&n);
    int f=factorial(n);
    printf("%d",f);
    return 0;
}