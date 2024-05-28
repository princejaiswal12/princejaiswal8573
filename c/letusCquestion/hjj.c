#include<stdio.h>
int reverse(int x){
    int lastdigit=0;
    int r;
    while(x!=0){
        r=x%10;
        lastdigit=lastdigit*10+r;
        x=x/10;
    }
    return lastdigit;
}   
int main(int argc, char *argv[]){
    int n=-123;
    int a=reverse(n);
    printf("%d",a);
    return 0;
}