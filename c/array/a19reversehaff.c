#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[8]={1,2,3,4,5,6,7,8};
    for (int i=1,j=5;i<j; i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for (int i = 0; i <8; i++)
    {
        printf("%d",arr[i]);
    }
    
    
    return 0;
}
