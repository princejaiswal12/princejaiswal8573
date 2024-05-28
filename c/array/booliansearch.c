#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[8]={1,2,3,4,4,6,7,8};
    int a=6;
    bool flag=false;
    for(int i=0;i<=7;i++){
        if(arr[i]==a) flag=true;
        break;
    }
    if(flag==false){
        printf("%d is not present ",a);
    }
    else printf("%d is present ",a);

}