#include<stdio.h>
int power(int a,int b){
    if(b==1) return a;
    int x=power(a,b/2);
    if(b%2==0){
        return x*x;
    }
    else
        return x*x*a;
    
}
int main(){
    int a,b;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    int p=power(a,b);
    printf("%d",p);
    return 0;

}