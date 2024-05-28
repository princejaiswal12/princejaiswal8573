#include <stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    typedef struct pokeman
    {
        int hp;
        int speed;
        int attach;
        char tier;
        char name[50];
    } book;
    book a,b,c;
    a.attach=100;
    a.hp=90;
    a.speed=120;
    a.tier='A';
    strcpy(a.name,"prince");

    // b.attach=a.attach;
    // b.hp=a.hp;
    // b.speed=a.speed;
    // b.tier=a.tier;
    // strcpy(b.name,a.name);

    b=a;//deep copy
    printf("%d\n",b.attach);
    b.attach=200;//change in b cant change in a
    printf("%d\n",a.attach);
    printf("%d\n",b.attach);


    
return 0;
}