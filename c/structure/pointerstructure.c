#include<stdio.h>
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
    } pokeman;
    
    pokeman pikachu;
    pikachu.hp=100;
    pikachu.attach=70;
    pikachu.speed=80;
    pikachu.tier='A';
    strcpy(pikachu.name,"pikachu");
    pokeman* x= &pikachu;
    printf("%p\n",x);
    
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",&pikachu.attach);
    printf("%p\n",&pikachu.tier);
    printf("%p\n",pikachu.name); 
}