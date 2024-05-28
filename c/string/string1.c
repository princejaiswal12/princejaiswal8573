#include<stdio.h>
int main(){
    char arr[]="hello my name";
    int i=0;
    while (arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
    
}