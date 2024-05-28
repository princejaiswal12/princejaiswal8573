#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[6]={1,2,3,4,5,6};
    int even_sum=0;
    int odd_sum=0;
    for(int a=0;a<=5;a++){
        if(a%2==0){
            even_sum+=arr[a];
            
        }
        else{
            odd_sum+=arr[a];
        }
    }
    printf("%d ",even_sum);
    printf("%d ",odd_sum);
    printf("%d",even_sum-odd_sum);
    return 0;
}
