// If a five-digit number is input through the keyboard, write a 
// program to calculate the sum of its digits. (Hint: Use the 
// modulus operator ‘%’)
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter  a five digit number\n");
    scanf("%d",&n);
    int sum =0;
    for(int i=1;n>0;i++){
        int j=n%10;
        n=n/10;
        sum=sum+j;
    }
    printf("%d",sum);
return 0;
}