#include<stdio.h>
void preinpost(int n){
    if(n==0) return;
    printf("pre %d\n",n);
    preinpost(n-1);
    printf("In %d\n",n);
    preinpost(n-1);
    printf("post %d\n",n);
    return;
}
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    preinpost(n);

}