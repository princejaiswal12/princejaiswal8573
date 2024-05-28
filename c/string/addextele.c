#include<stdio.h>
#include<string.h>
int main(){
     char si[]="collage";
     for(int i=6;i>=2;i--){
        si[i+1]=si[i];
     }
     si[2]='k';
     printf("%s",si);
    
    return 0;
}