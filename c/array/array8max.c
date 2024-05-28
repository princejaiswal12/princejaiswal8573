#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5];
    printf("enter a number");
    for(int i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
        if(arr[0]<arr[i]){ 
        arr[0]=arr[i];
        }
    }
    printf("%d",arr[0]);

    return 0;
}
