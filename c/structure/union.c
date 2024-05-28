#include<stdio.h>
#include<math.h>
#include<string.h>
typedef union pokeman //global decleration work for all
    {
        int hp;
        int speed;
        int attach;
        char tier;
        char name[50];
        } pokeman;
 
int main(int argc, char const *argv[])
{
    pokeman pikachu ; //only last inatialation is true
    pikachu.speed=100;
    pikachu.attach=50;
    pikachu.tier='A';
    strcpy(pikachu.name,"pikachu");
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attach);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n\n",pikachu.name);

     
}