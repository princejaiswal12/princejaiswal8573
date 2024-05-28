#include<stdio.h>
void prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) printf("%d ",i);
    }
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    prime(n);
}