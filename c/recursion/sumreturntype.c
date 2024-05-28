#include<stdio.h>
int sum(int x){ 
    if(x==1||x==0) return x;
    return x+sum(x-1);
}

int main(){
    int n;
    printf("enter a numbern");
    scanf("%d",&n);
    int s = sum(n);
    printf("%d ",s);
    return 0;
    
    
}