#include<stdio.h>
void zigzak(int n){
    if(n==0) return;
    printf("%d",n);
    zigzak(n-1);
    printf("%d",n);
    zigzak(n-1);
    printf("%d",n);
    return;
    
}
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for (int i = 0; i <=n; i++)
    {
        zigzak(i);
        printf("\n");
    }

    
    
}