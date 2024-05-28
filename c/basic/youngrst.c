#include<stdio.h>
int main()
{
    int ram,shyam,ajay;
    printf("Enter age of Ram:");
    scanf("%d",&ram);
    printf("\nEnter age of Shyam:");
    scanf("%d",&shyam);
    printf("\nEnter age of Ajay:");
    scanf("%d",&ajay);
    if(ram<shyam&&ram<ajay){
        printf("ram is youngest:");
    }
    if(shyam<ram&&shyam<ajay){
        printf("Shyam is youngest:");
    }
    if(ajay<ram&&ajay<shyam){
        printf("Ajay is youngest:");
        }
}