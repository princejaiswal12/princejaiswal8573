#include<stdio.h>
#include<string.h>
int main(){
    struct pokeman
    {
        int hp;
        int speed;
        int attach;
        char tier;
        char name[50];
    } pikachu,charizard,mewtow;
    //struct pokeman pikachu;
    printf("enter a attach");
    scanf("%d",&pikachu.attach);
    printf("%d",pikachu.attach);
    //pikachu.attach=100;
    pikachu.hp=80;
    pikachu.speed=90;
    pikachu.tier='A';
    strcpy(pikachu.name,"hello");
    printf("%s",pikachu.name);

    //struct pokeman charizard;
    charizard.attach=56;
    charizard.hp=566;
    charizard.speed=100;
    charizard.tier=90;

    //struct pokeman mewtow;
    mewtow.attach=56;
    mewtow.hp=566;
    mewtow.speed=100;
    mewtow.tier=90;
     
    struct lagendarypokeman
    {
        int specialattack;
        struct pokeman x;
    };
    
}