#include<stdio.h>
int main(){

    char arr[]="hello my name";
    arr[1]=98; //98->b
    arr[0]='M';
    int i=0;
    // while (arr[i]!='\0')
    // {
    //     printf("%c",arr[i]);
    //     i++;
    // }
    // while (arr[i]!='\0')
    // {
    //     printf("%c",i[arr]);
    //     i++;
    // }
    while (arr[i]!='\0')
    {
        printf("%c",*(arr+i));
        i++;
    }
    
}