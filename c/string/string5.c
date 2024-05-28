#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    printf("enter the char ");
    //scanf("%s",str); //& nahi raha ga
    //only the first word consider
    gets(str); //take complete sentense
    //scanf("%[^\n]s",str);//take complete sentense
    printf("the input is : %s",str);
    return 0;
}