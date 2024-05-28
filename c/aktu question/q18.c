#include<stdio.h>
// 18.	Write a program to find the reverse of a number.
void reverse(int m){
    for(int i=1;m==0;i++ ){
        int j=m%10;
        m=m/10;

    }
    return;
}
int main(int argc, char const *argv[])
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int reverse=0;
    for(int i=1;n!=0;i++){
        int j=n%10;
        n=n/10;
        reverse=reverse*10+j;

    }
    printf("%d ",reverse);
    
    
    return 0;
}
