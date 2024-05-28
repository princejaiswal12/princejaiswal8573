#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5],prod=1;
    printf("enter a numb");
    for(int i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
        printf("%d",arr[i]);
        prod=prod*arr[i];

    }
    printf("\n %d",prod);
    return 0;
}
