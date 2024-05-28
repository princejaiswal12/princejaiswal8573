#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5]={1,2,3,4,5};
    int a=4;
    int brr[5];
    for(int i=0;i<=4;i++){
        
        brr[i]=arr[a];
        a--;
    }
    for(int i=0;i<=4;i++){
        printf("%d ",brr[i]);
    }

    return 0;
}
