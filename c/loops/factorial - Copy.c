#include<stdio.h>
int main()
{
    int n,prod=1;
    printf("Enter a numb");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        prod=prod*i;
        printf("the factorial of %d is %d\n",i,prod);

    }
    

}