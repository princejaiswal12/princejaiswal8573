#include <stdio.h>
int main( )
{
    int z = 5 % 3 / 8 * 3 + 4 ;
    //pricedence of %,/,* is same
    //1/8*3+4=0*3+4=4
    printf("%d",z);
return 0;
}