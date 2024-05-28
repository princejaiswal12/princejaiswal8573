#include<stdio.h>
int main()
{
    int n,sum,p;
    printf("enter a number=");
    scanf("%d",&n);
    p=n;
    int r=0;
    while(n!=0){
        r=(r*10)+(n%10);
          n=n/10;
    }
    printf("%d",r);
    sum = p+r;
      printf("%d",sum);
    
}