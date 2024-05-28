#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<limits.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int* ptr=(int*) malloc(100*sizeof(int));
    //int* ptr=(int*) malloc(100*4);
    int* ctr=(int*) calloc(100,sizeof(int));
    // int* ptr=(int*) calloc(100,4);
return 0;
}