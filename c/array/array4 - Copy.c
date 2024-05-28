#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arra[4];
    for(int i=0;i<=3;i++){
        scanf("%d",&arra[i]);
    }
    int a=4;
    for(int i=0;i<=3;i++){
        a--;
        printf("%d ",arra[a]);
    }
    return 0;
}
