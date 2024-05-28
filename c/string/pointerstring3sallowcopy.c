#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="hello world";
    char* s2=s1; //s2 is a sallow copy
    s1[0]='m';
    printf("%s",s2);
    
    return 0;
}