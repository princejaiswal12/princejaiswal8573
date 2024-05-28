#include<stdio.h>
int main()
{
    int arr[8]={1,2,1,4,5,3,2,3};
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            if(arr[i]==arr[j])
            {printf("%d is duplicate\n",arr[i]);}
    }
    }
}