#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[8]={1,2,3,4,3,2,1};
    
    for(int i=0;i<=7;i++){
        bool flag=false;
        for(int j=i+1;i<=7;i++)
       { 
        if(arr[i]==arr[j]) 
        {flag=true;}
        
        }
        if(flag==false){
        printf("%d is not duplicate \n",arr[i]);
        break;
    }
    
    }
    

}