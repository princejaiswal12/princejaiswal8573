#include<stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("enter number of row:" );
    scanf("%d",&r);
    int c;
    printf("enter number of column:" );
    scanf("%d",&c);
    int arr[r][c];
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
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
        
        printf("\n");
    }
    printf("%d",sum);
    
    
    return 0;
}
