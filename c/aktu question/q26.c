// 26.	Write a program to add and multiply two matrices.
#include<stdio.h>
int main(){
    int n;
    printf("enter number of row of first mat ");
    scanf("%d",&n);
    int m;
    printf("enter number of column of first mat ");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int o;
    printf("enter number of row of second mat ");
    scanf("%d",&o);
    int p;
    printf("enter number of column of second mat ");
    scanf("%d",&p);
    int brr[o][p];
    for(int i=0;i<o;i++){
        for(int j =0;j<p;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    if(m!=o) printf("multiplication is not poss");
    else{
        printf("multiplication is\n");
        int res[n][p];
        for(int i=0;i<n;i++){
            for(int j =0;j<p;j++){
                res[i][j]=0;
                for(int k=0;k<m;k++){
                    res[i][j]+=arr[i][k]*brr[k][j];
                }
            }
        }  
        for(int i=0;i<n;i++){
            for(int j=0;j<p;j++){
             printf("%d ",res[i][j]);
            }
            printf("\n");
            
        } 
    }   
}