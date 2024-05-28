#include<stdio.h>
int power(int x,int y){
    if(y==0) return 1;
    return x*power(x,y-1);//a^n=a*a^n-1;
}
int main(){
    int a,b;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    int p=power(a,b);
    printf("%d",p);
    return 0;

}