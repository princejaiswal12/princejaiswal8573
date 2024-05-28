#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={7,4,5,9,8,2,1};
    int n=7;
    
    //selection shot
    for (int  i=0; i<n-1;i++){
        int min=INT_MAX;
        int minind=-1;
        for (int j = i; j <=n-1; j++){
            if(min>arr[j]){
                min=arr[j];
                minind=j;
            }
        }
        int temp=arr[minind];
        arr[minind]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }   
}