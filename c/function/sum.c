#include<stdio.h>
int sum(int x,int y){
    return x+y;
}

int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    int m;
    printf("Enter the number ");
    scanf("%d",&m);
    int a = sum(n,m);
    printf("%d",a);
    return 0;

}