// 4.	Write a program that accepts the temperature in Centigrade nd converts it into Fahrenheit using the formula C / 5 = (F – 32) / 9.
#include<stdio.h>
int main()
{float temp;
printf("enter temp in centigrade");
scanf("%f",&temp);
float Fahrenheit;
Fahrenheit= (9*temp/5)+32;   //C / 5 = (F – 32) / 9
printf("%f",Fahrenheit);

}