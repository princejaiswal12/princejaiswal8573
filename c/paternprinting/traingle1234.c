#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==n/2+1&&j==n/2+1){

            printf("*");}
            
        }
        printf("\n");
    }
}