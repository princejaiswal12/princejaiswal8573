#include<stdio.h>
void sum(int n,int s){
    if(n==0){
        printf("sum is %d",s);
    }
    sum(n-1,s+n);
    return;

}
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    sum(n,0);
    
}