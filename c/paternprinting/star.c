#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int m;
    printf("enter a number");
    scanf("%d",&m);
for(int i=1;i<=n;i++){
    for(int i=1;i<=m;i++){
        printf("*");
    }
    printf("\n");
}
}