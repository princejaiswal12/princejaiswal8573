// Any character is entered through the keyboard, write a 
// program to determine whether the character entered is a 
// capital letter, a small case letter, a digit or a special symbol. 
// The following table shows the range of ASCII values for 
// various characters.//a=97,z=122, A=65,Z=90,
#include<stdio.h>
int main(){
    char n;
    printf("Enter a number ");
    scanf("%c",&n);
    if(97<=n&&n<=122) printf("lower case");
    if(65<=n&&n<=90) printf("UPPER CASE");
    return 0;
}