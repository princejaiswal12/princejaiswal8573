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

    (*x).hp=200; //pikachu.hp become 200;
    // int p;
    // int*x=&p;
    // *x=70;//p become 70
    printf("%d",pikachu.hp);
}