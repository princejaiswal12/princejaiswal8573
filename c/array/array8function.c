#include<stdio.h>
void fun( int a[]) {
    a[0]=1;
    return;
}
int main(int argc, char const *argv[])
{
    int arr[5]={4,5,6,7,8};
    
    printf("%d\n",arr[0]);
    fun(arr);
    printf("%d\n",arr[0]);//call by reference
    return 0;
}
