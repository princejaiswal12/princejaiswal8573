#include<stdio.h>
void fun(int a[]){
    int temp;
    temp=a[0];
    a[0]=a[1];
    a[1]=temp;
    return;
}

int main(int argc, char const *argv[])
{
    int arr[2]={1,2};
    printf("\n%d %d",arr[0],arr[1]);
    fun(arr);
    printf("\n%d %d",arr[0],arr[1]);
     
    return 0;
}
