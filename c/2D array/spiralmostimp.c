#include<stdio.h>
int main(){
    
    int m;
    printf("enter a row of 1st matrx");
    scanf("%d",&m);
    int n;
    printf("enter a column of 1st matrx");
    scanf("%d",&n);
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int totele=m*n;
    int count =0;
    while(count<totele){
        //print minimum row
        for(int j=minc;j<=maxc;j++){
            printf("%d ",a[minr][j]);
            count++;
        }
        minr++;
        if(count>=totele) break;
        //print max colum
        for(int i=minr;i<=maxr;i++){
            printf("%d ",a[i][maxc]);
            count++;
        }
        maxc--;
        if(count>=totele) break;
        //print max row
        for(int j=maxc;j>=minc;j--){
            printf("%d ",a[maxr][j]);
            count++;
        }
        maxr--;
        if(count>=totele) break;
        //print min col
        for(int i=maxr;i>=minr;i--){
            printf("%d ",a[i][minc]);
            count++;
        }
        minc++;
        if(count>=totele) break;
    }
}
