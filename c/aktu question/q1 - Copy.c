// Write a program that accepts the marks of 5 subjects and finds the sum and percentage of marks obtained by the student.
#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("enter a number ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int sum =a+b+c+d+e;
    float percent = (sum)/5;
    printf("sum is %d and percentage is %f",sum,percent);
    return 0;
    

}