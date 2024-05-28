#include<stdio.h>
void swap(int *i,int *j){
    int temp= *i;
    *i =*j;
    *j=temp;
}
int main(int argc, char const *argv[])
{
    int n;
    printf("enter a number ") ;
    scanf("%d",&n);
    int m;
    printf("enter a number");
    scanf("%d",&m);
    swap(&n,&m);
    printf("%d %d",n,m);
    
    return 0;
}
