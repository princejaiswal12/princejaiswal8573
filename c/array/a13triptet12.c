#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int a=12;
    int b=0;
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            for(int k=j+1;k<=7;k++){
                if((arr[i]+arr[j]+arr[k])==12){
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                    b++;
                }
            }
        }
    }
    printf("%d",b);
    return 0;
}
