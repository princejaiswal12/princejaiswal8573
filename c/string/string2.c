#include<stdio.h>
int main(){
    //char arr[]={'h','e','l','l','o','!'};//not take \0 at end
    char arr[]="hello my name";//autometicaly take \0 at end
    //so here size of char is =countchar+1(\n)
    int i=0;
    while (arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
    
}