//WAP to print namaste if user is Indian bonjour if user is French
#include<stdio.h>
void namaste();//Function decleration
void bonjour(); 

int main(){  //Calling function
printf("Enter f for french and i for indian\n");
char a;
scanf("%c",&a);
if(a=='f'){
    printf("bonjour");
}
else{
    printf("Namaste");
} return 0;
}
void namaste(){   //Defination of function
    printf("Nmaste\n");
}
void bonjour(){
    printf("Bonjour");
}