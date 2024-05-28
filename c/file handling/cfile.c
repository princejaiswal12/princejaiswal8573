#include<stdio.h>
int main()
{
    // FILE* prt=fopen("prince.txt","r");
    // char str[100];
    // while(fgets(str,100,prt)!=NULL)
    // printf("%s",str);
    //creating a file
    FILE* prt=fopen("princejais.txt","w");
    char str[100]="hi my name is prince";
    fputs(str,prt);
    fclose(prt);

return 0;
}