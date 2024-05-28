#include<stdio.h>
#include<limits.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("enter number of row:" );
    scanf("%d",&r);
    int c;
    printf("enter number of column:" );
    scanf("%d",&c);
    int arr[r][c];
    int max=INT_MIN;
    int min=INT_MAX;
    printf("enter the elements \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            if(arr[i][j]<min){
                min=arr[i][j];
            }
            }}
        printf("%d\n",min);
        printf("%d",max);
        
        printf("\n");
    
    
    
    return 0;
}
