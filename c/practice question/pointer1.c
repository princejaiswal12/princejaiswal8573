#include<stdio.h>
int main(){
    int x=10;
    int* ptr=&x;
    printf("%d ",*ptr);
    printf("%p ",ptr);
    return 0;


}