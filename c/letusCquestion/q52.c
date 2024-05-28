# include <stdio.h> 
int main( ) 
{ 
int  i = 1, a, b, c ; 
printf ( "Armstrong numbers between 1 & 500 are:\n" ) ; 
while ( i <= 500) 
{ 
    a=i%10;
    i=i/10;
    b=i%10;
    i=i/10;
    c=c%10;
if ( ( a * a * a ) + ( b * b * b ) + ( c * c * c ) == i ) 
printf ( "%d\n", i ) ; 
i++ ; 
} 
return 0 ; 
} 