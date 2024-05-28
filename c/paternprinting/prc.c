#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a=6,b,c,d,k;
    b=(a++)+(a++);
    
    printf("%d\n",a);
    c=(++a)+(++a);

    printf("%d\n",a);
    d=(++a)+(a++);
    printf("%d\n",a);
    
    
    printf("%d\n",c);
    
    printf("%d %d %d %d",a,b,c,d);
    
   
   
    return 0;
}
