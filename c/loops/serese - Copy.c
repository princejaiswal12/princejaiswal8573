#include<stdio.h>
int main(){
    int n,r;
    //1-2+3-4+5-6+7-8+9.......nterm
    printf("Enter a num");
    scanf("%d",&n);
    if(n%2==0){
        r=-n/2;

    }
    else {
        r=-n/2+n;
    }
    printf("%d",r);
}