#include<stdio.h>
int main(int argc, char const *argv[])
{
        int arr[8]={1,2,3,4,5,6,7,8};
        int a=0;
        for(int i=0;i<=7;i++){
            for(int j=i+1;j<=7;j++){
                if(12==(arr[i]+arr[j])){
                    a++;     
                    printf("(%d,%d)",arr[i],arr[j]);
                }
            }
        }
        printf("\n%d",a);
    }
    

