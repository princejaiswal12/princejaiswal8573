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
     for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=n-1;i>=0;i--){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for(int i=0;i<n;i++){
                printf("%d ",arr[i][j]);
            }
        }
        printf("/n");
     }
    

    }
