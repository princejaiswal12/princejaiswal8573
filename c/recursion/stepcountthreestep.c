#include<stdio.h>
int stairpath(int n){
    if(n==1||n==2) return n;
    if(n==3) return 4;
    return stairpath(n-1)+stairpath(n-2)+stairpath(n-3);
} 
int main(){
    int n;
    printf("enter a numb");
    scanf("%d",&n);
    int f=stairpath(n);
    printf("%d",f);
    return 0;

}