#include<stdio.h>
void rev(int brr[],int si,int di){
    for(int i=si,j=di;i<j;i++,j--){
        int temp=brr[i];
        brr[i]=brr[j];
        brr[j]=temp;
        
    }
}
int main(int argc, char const *argv[])
{
    int arr[7]={1,2,3,4,5,6,7};
    rev(arr,1,5);
    for (int i=0;i<=6;i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}
