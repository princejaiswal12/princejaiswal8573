#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<limits.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int* ptr=(int*) calloc(10,4);
    int* p=ptr;
    ptr++;
    ptr=realloc(prt,20*sizeof(int))
    free(p);
    
    //free(ptr); //give error
return 0;
}