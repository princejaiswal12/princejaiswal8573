#include<stdio.h> 
#include<math.h>
int main( ) 
{ 
int angle,sum ; 
printf ( "\nEnter angle in degrees: " ) ; 
 scanf ( "%d", &angle ) ; 
angle = angle * 3.14 / 180 ; 
sum = pow ( sin ( angle ), 2 ) + pow ( cos ( angle ), 2 )  ; 
if ( sum == 1 ) 
printf ( " sum of squares of sine and cosine is equal to 1" ) ; 
else 
printf ( " sum of squares of sine and cosine is not equal to 1" ) ; 
return 0 ; 
} 