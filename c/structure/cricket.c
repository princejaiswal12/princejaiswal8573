#include <stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    typedef struct cricket
    {
        char name[25];
        int age;
        int noofmatches;
        float average;
    } cricket;
    cricket arr[20];
    for (int i = 0; i < 2; i++)
    {
        printf("enter name ");
        scanf("%s",arr[i].name);
        printf("enter age ");
        scanf("%d",&arr[i].age);
        printf("enter no of test match");
        scanf("%d",&arr[i].noofmatches);
        printf("enter average score");
        scanf("%f",&arr[i].average);
        
    }
    for(int i=0;i<2;i++){
        printf("\n\n name is %s\n",arr[i].name);
        printf("age is %d\n",arr[i].age);
        printf("no of test mach  is %d\n",arr[i].noofmatches);
        printf("average score is %f\n",arr[i].average);

    }
return 0;
}