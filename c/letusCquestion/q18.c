#include <stdio.h>
int main( )
{
    int z,y;
    y = z = -3 % -8 / 2 + 7 ;
    // y=z=-3/2+7; y=z=-1+7; y=z=6
    printf("%d",y);
return 0;
}