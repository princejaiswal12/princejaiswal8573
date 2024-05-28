// If the ages of Ram, Shyam and Ajay are input through the 
// keyboard, write a program to determine the youngest of the 
// three.
#include<stdio.h>
int main(){
    int ageram,ageshyam,ageajay;
    scanf("%d %d %d",&ageajay,&ageram,&ageshyam);
    if(ageajay<ageram){
        if(ageajay<ageshyam){
            printf("%d",ageajay);
        }
        else  printf("%d",ageshyam);
    }
    else if(ageram<ageajay){
        if(ageram<ageshyam){
            printf("%d",ageram);
        }
        else printf("%d",ageshyam);
    }
}