#include<stdio.h>
void greeting(int x,int y){
    if(x>y) return;
    greeting(x+1,y);
    printf("%d\n",x);
    return;
    
}

int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    greeting(1,n);
} 