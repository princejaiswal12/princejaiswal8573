#include<stdio.h>
void swap(int,int);
int main(){
    int x,y;
    x=10,y=20;
    printf("x=%d \n y=%d",x,y);
    swap(x,y);
    printf("x=%d \n y=%d",x,y);
    return 0;

}
void swap(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("a=%d\n b=%d",a,b);
}
