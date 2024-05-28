#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,4,8};
    int a=4;
    for(int i=7;i>=0;i--){
        if(arr[i]==a) {
            printf("%d is duplicate& index is %d\n",a,i);
            break;
        }
    }
}