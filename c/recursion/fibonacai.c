#include<stdio.h>
int fibonaci(int n){
    if(n==2||n==1) return 1;
     
    return fibonaci(n-1)+fibonaci(n-2);
}
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for (int i = 1; i < n; i++)
    {
        int f=fibonaci(i);
        printf("%d ",f);
    }
    
    
    
}