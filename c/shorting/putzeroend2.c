#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
int main(int argc, char const *argv[])
{
    int arr[9]={5,3,6,0,4,0,0,6,0};
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9-i; j++)
        {
            if (arr[j]==0)
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
            
        }
        
    }
    for (int i = 0; i < 9; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
return 0;
}