#include<stdio.h>
// 7 Write a program to find the greatest of three numbers.
int main(int argc, char const *argv[])
{
    int n,o,p;
    printf("enter three number ");
    scanf("%d %d %d",&n,&o,&p);
    if(n>o&&n>p){
        printf("%d",n);
    }
    else if(o>p&&o>n){
        printf("%d",o);
    }
    else if(p>o&&p>n) printf("%d",p);
    else if(p==o&&o==n) printf("number is same that is %d",n);
    else printf("error");
    return 0;
}
