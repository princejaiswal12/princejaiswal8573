#include<stdio.h>
int factorial(int x){
    int fact =1;
    for(int i=2;i<=x;i++){
         fact=fact*i;
        }
        return fact;
        }
        int combination(int n,int r){
           int comb=factorial(n)/(factorial(n-r)*factorial(r));
            return comb;
        }

int main()
{
    int t;
    printf("enter a number");
    scanf("%d",t);
    for(int i=0;i<=t;i++){
        for(int j=0;j<=i;j++){
            int f = combination(i,j);
            printf("%d ",f);
        }
        printf("\n");
    }
}