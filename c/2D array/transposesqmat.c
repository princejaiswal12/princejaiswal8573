 #include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter number of row/coulmn:" );
    scanf("%d",&n);
     
    int arr[n][n];
    printf("enter the elements \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){//or for(int j=0;j<=i;j++)
        int temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
       }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
     
    return 0;
}