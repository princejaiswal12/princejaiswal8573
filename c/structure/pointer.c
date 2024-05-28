#include <stdio.h> 
typedef int* pointer;
int main(int argc, char const *argv[])
{
    // int x=5,y=7;
    // int* a=&x,b=&y;//int* x and int y
    // printf("%p\n",&x);
    // printf("%p\n",&y);
    int x=5,y=7;
    pointer a=&x,b=&y;//dont gave error
    printf("%p\n",&x);
    printf("%p\n",&y);

return 0;
}