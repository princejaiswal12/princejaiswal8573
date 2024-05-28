#include<stdio.h>
int main()
// pattern printing

{
     int k=1;
    printf("Hii Printed Pattern\n");
     for(int i=1;i<=5;i++)
     {
          for(int j=1;j<=i;j++)
          {
          printf("*");
          }
     printf("\n");
     }
return 0;
}