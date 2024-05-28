#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
int main(int argc, char const *argv[])
{
    int arr[9]={5,3,6,0,4,0,0,6,0};
    int ans[9];
    int indx=0;
    for (int i = 0; i < 9; i++)
    {
        if(arr[i]!=0){
            ans[indx]=arr[i];
            indx++;
        }
    }
    while(indx!=9){
        ans[indx]=0;
        indx++;
    }
    for (int i = 0; i < 9; i++)
    {
        printf("%d ",ans[i]);
    }
    
    
return 0;
}