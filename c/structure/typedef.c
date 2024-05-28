#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokeman
    {
        int hp;
        int speed;
        int attach;
        char tier;
        char name[50];
    } book;
     
    book k;
    k.hello=5
    
    struct pokeman pikachu;
    
    pikachu.hp=80;
    pikachu.speed=90;
    pikachu.tier='A';
    pikachu.attach=50;

    struct pokeman charizard;
    charizard.attach=56;
    charizard.hp=566;
    charizard.speed=100;
    charizard.tier=90;

    struct pokeman mewtow;
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