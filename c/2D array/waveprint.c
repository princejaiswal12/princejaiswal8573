#include<stdio.h>
int main(){
    
    int n;
    printf("enter a row of 1st matrx");
    scanf("%d",&n);
    int m;
    printf("enter a column of 1st matrx");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
        for(int j=0;j<n;j++)
        {
        printf("%d ",arr[i][j]);
        }
        }
        else{
            for(int j=n-1;j>=0;j--)
        {
        printf("%d ",arr[i][j]);
        }
           
        }
        printf("\n");
    }
    

    }
