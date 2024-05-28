#include<stdio.h>
int main()
{
    int arr[8]={1,2,3,4,5,4,6,7};
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            if(arr[i]==arr[j]) printf("%d is duplicate",arr[i]);
        }
    }
}