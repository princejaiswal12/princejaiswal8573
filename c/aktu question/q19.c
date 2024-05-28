#include<stdio.h>
// 19.	Write a program to print Armstrong numbers from 1 to 1000.
void arms(int k ){
    int arm=0,a,b,c=k;
     for (int i=0; i<=4; i++)
    {
        a=k%10;
        b=a*a*a;
        arm=arm +b;
        k=k/10;

    }
    if(c==arm){
        printf("%d ",c);
    }
    return;

}
int main(int argc, char const *argv[])
{
    int n;
    printf("enter a number ");
    scanf("%d",&n); 
    for(int i=1;i<=n;i++){
    arms(i);
    }
    return 0;
}
