#include<stdio.h>
int reverse(int x){
    int rev=0;
    for(int i=1;x>0;i++){
        int j=x%10;
        x=x/10;
        rev=rev*10+j;
        
    }
    return rev;
}
int main(int argc, char *argv[]){
    int a,n;
    printf("enter a number");
    scanf("%d",&n);
    a=reverse(n);
    printf("%d",a);
    return 0;
}