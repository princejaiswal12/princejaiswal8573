#include<stdio.h>
int main(int argc, char const *argv[])
{
        int a =25;
        int *x=&a;
        int **y=&x;
        printf("enter a number");
        printf("%d\n",a);
        printf("%d\n",*x);
        printf("%d\n",**y);
        printf("%d\n",*y);
        printf("%d\n",y);
        printf("%d\n",x);
        printf("%p\n",*y);
        printf("%p\n",x);
        printf("%p\n",a);
        printf("%p\n",*x);
                
    }
     

