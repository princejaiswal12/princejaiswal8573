#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,4,8};
    int a=4;
    int check=0;
    for(int i=7;i>=0;i--){
        if(arr[i]==a) {
            check=1;
            break;
        }
    }
    if(check==1) {
        printf("%d is present",a);
    }
        else printf("%d is not present",a);
    
}