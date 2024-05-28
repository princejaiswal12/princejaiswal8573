#include<stdio.h>
#include<string.h>
int main(){
    char* str = "hello";
    int x=strlen(str);//print size -1;
     printf("%d\n",x);

    char s1[12]="hello";
    char s2[12];
    strcpy(s2,s1);//deep copy
    s1[0]='f';
    printf("%s\n",s2);

    char str1[]="raghav"; //str1 become ragavgarg 
    char str2[]="garg";
    strcat(str1,str2);//add up string
    printf("%s\n",str1);
    return 0;

}