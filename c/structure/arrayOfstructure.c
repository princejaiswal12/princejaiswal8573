#include<string.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{
    typedef struct pokaman
    {
        int attack;
        int hp;
        char tier;
        int speed;
        char name[15];

    } pokaman ;
    pokaman arr[3];//arr[0],arr[1],.....arr[3]
    arr[0].attack=100;  
    arr[0].hp=89;
    arr[0].speed=78;
    arr[0].tier='A';
    strcpy(arr[0].name,"charizard");

    arr[1].attack=200;  
    arr[1].hp=90;
    arr[1].speed=98;
    arr[1].tier='b';
    strcpy(arr[1].name,"prince");

    arr[2].attack=300;  
    arr[2].hp=80;
    arr[2].speed=70;
    arr[2].tier='c';
    strcpy(arr[2].name,"saurabhbeta");

    for(int i=0;i<3;i++){
        printf("%d\n",arr[i].attack);
        printf("%d\n",arr[i].hp);
        printf("%d\n",arr[i].speed);
        printf("%c\n",arr[i].tier);
        printf("%s\n",arr[i].name);
    }
    
return 0;
}