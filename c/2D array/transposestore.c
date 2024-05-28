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
    int brr[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr[j][i]);
            brr[i][j]=arr[j][i];
        }
        printf("\n");
    }
     for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}