#include<stdio.h>
#include<string.h>
int main(){
     
    char* ptr="physics wallah";//for read only cannot be changed
    //ex char ptr[0]='r'; // not be possible
    ptr ="collage wallah";  //possible
    printf("%s\n",ptr);
    //in normal initiliation,we can modify individual ch but not enter string
    //pointer initilization,we can modify entire string but not ind ivisible ch
    char str[]="physics wallah";
    str[0]='c';//possible
    //str="collage wallah "; //not possible
    printf("%s",str);
    
    
    return 0;
}