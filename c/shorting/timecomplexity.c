#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,8,9,10};//arry must be shorted
    int target=8;
    int i=0;
    int j=7; //n-1
    while (i<j)
    {
        if(arr[i]+arr[j]==target){
            printf("%d %d",arr[i],arr[j]);
            break;
        }
        else if (arr[i]+arr[j]>target)
        {
            j--;
        }
        else i++;
        
    }
    
}