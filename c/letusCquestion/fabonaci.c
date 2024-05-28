#include<stdio.h>
int faci(int n){
    if(n==2||n==1) return 1;
    return faci(n-1)+faci(n-2);
}
int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    for (int i = 1; i < n; i++)
    {
        printf("%d ",faci(i));
    }
    
    
}