#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5],sum=0;
    printf("enter a numb");
    for(int i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
        printf("%d",arr[i]);
        sum=sum+arr[i];

    }
    printf("\n%d",sum);
    return 0;
}
