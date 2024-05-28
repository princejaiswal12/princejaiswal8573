#include<stdio.h>
void prince(){
    printf("i am a student \n");
    printf("i am from gahana \n");
    printf("i am a student \n");
    return;
}
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    prince();
    prince();
    prince();


    }
}