#include<stdio.h>
void greeting(int x,int y){
    if(x>y) return;
    printf("%d\n",x);
    greeting(x+1,y);
    return;
    
}

int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    greeting(1,n);
}