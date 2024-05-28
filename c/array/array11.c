#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[7]={1,2,3,4,5,6,7};
    int a=4;
    int count =0;
    for (int  i = 0; i <=6;i++)
    {
       if(a<arr[i]){
        count++;
       } 
    }
    printf("%d ",count);
    

    return 0;
}
