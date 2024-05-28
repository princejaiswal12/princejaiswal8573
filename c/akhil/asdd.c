#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age>18){
        printf("He has right to vote");
        printf("Write to vote");
    }
    else{
    printf("He is not adult");
    }
    return 0;
}