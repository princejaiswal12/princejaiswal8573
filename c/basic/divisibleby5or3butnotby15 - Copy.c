#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
if((n%3==0||n%5==0)&&n%15!=0){
    printf("the number is divisible by 3&5 but not divisible by 15");
}
else{
    printf("the number is not maching the required condition");

}
}