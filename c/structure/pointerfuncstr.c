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
void change(pokeman* p){//it become new pokeman which is copy of pikachu
    //(*p).hp=70;
    p->hp=70;//also work
    (*p).attach=200;
    (*p).speed=100;
    (*p).tier='a';
    strcpy((*p).name,"hello");
}
void fun(pokeman p){
    printf("%d",p.hp);

}
int main(int argc, char const *argv[])
{
    pokeman pikachu={60,100,50,'A',"pikachu"};//order must be same
    // pikachu.hp=60;
    // pikachu.speed=100;
    // pikachu.attach=50;
    // pikachu.tier='A';
    // strcpy(pikachu.name,"pikachu");
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attach);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n\n",pikachu.name);

    change(&pikachu);//pass by reference

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attach);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);
    fun(pikachu);
}