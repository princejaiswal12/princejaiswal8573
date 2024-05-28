#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    typedef struct date
    {
        int day;
        int month;
        int year;

    } date ;
    date a,b;
    //->5/12/2023
    //->1/1/2024
    a.day=5;
    a.month=12;
    a.year=2023;

    b.day=1;
    b.month=1;
    b.year=2024;

    //if(a==b) printf("same");//not possible
    if(a.day==b.day){printf("same");}
    else printf("diff");


    
return 0;
}