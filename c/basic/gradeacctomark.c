#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>91&&n<100){
        printf("excalent");
    }
    if(n>81&&n<91){
        printf("very good");
    }
    if(n>71&&n<91){
        printf("good");
        }
        if(n>61&&n<71){
            printf("satisfactory");
        }
        if(n>51&&n<61){
            printf("needs improvement");
            }
            if(n<=51){
                printf("failure");


}
}