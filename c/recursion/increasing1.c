#include<stdio.h>
void greeting(int x){
    if(x==0) return;
    
    greeting(x-1);
    printf("%d\n",x);
    return;
    
}

int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    greeting(n);
}