#include<stdio.h>
void prime(int a){
    for(int i=2;i<=a/2;i++){
        if(a%i==0) printf("%d ",i);
    }
    printf("\n");
    
}
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        printf("%d :- ",i);
        prime(i);
    }
    return 0;
}
