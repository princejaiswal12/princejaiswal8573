#include<stdio.h>
#include<limits.h>
int main(int argc, char const *argv[])
{
     int arr[8]={8,8,7,6,5,4,3,2,};
     int max=INT_MIN;
     int smax=INT_MIN;
     for(int i=0;i<=7;i++){
        if(max<arr[i]){
            smax=max;//smax is now privious max
            max=arr[i];//max is new max
        }
        else if(smax<arr[i]&&max!=arr[i]){//msx>arr[i]
            smax=arr[i];
        }
     }
    
     printf("%d\n",max);
     printf("%d\n",smax);
     printf("always correct");
    return 0;
}
