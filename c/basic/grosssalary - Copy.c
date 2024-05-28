/*ramesh basic salary is input throw the keyboard .his searness allowance is 40% of basic salary 
,and house rent allowande is 20% of basic salary.write a program to calculate his gross salary*/
#include<stdio.h>
int main()
{
    int bp,da,hra,grpay;
    printf("Enter basic Salary of Ramesh");
    scanf("%d",&bp);
    da=bp*40/100;
    hra=bp*20/100;
    grpay=bp+da+hra;
    printf("Gross Payment of Ramesh = %d\n",grpay);
    
}