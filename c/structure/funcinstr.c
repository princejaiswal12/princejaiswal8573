#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct pokeman //global decleration work for all
    {
        int hp;
        int speed;
        int attach;
        char tier;
        char name[50];
        } pokeman;
void change(pokeman s){//it become new pokeman which is copy of pikachu
    s.hp=100;
    s.attach=200;
    s.speed=300;
}
void fun(pokeman p){
    printf("%d",p.hp);
}
int main(int argc, char const *argv[])
{
    pokeman pikachu;
    pikachu.hp=60;
    pikachu.attach=100;
    pikachu.speed=50;
    change(pikachu);//pass by value
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attach);
    printf("%d\n",pikachu.speed);
    //fun(pikachu);
}