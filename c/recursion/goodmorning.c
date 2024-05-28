#include<stdio.h>
void greeting(int x){
    if(x==0) return;
    printf("good morning\n");
    greeting(x-1);
    return;
    
}

int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    greeting(n);
}