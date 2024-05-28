#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[8]={1,2,3,4,5,6,7,8};
    for(int i= 0;i<=7;i++){
        if(i%2==0){
            arr[i]+=10;
            printf("%d ",arr[i]);}
            else
            {arr[i]*=2;
            printf("%d ",arr[i]);}
            
        }
        for(int i= 0;i<=7;i++){
        printf("%d",arr[i]);
            
        }
        return 0;
    }
    

