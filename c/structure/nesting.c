#include<stdio.h>
#include<math.h>
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
    typedef struct lagendarypokeman
    {
        pokeman normal;
        char abality;
    } lagendarypokeman;
    lagendarypokeman mewtwo;
    typedef struct godpokeman
    {
        lagendarypokeman lagend;
        int superattack;
    }godpokeman;
    godpokeman papa;
    strcpy(mewtwo.abality,"pressure");
    mewtwo.normal.hp=56;
    mewtwo.normal.attach=96;
    papa.superattack=300;
    strcpy(papa.lagend.abality."kill everyone")
    papa.lagend.normal.attach=100;//nested structure
return 0;
}