#include<stdio.h>
int fact(int i){
    if(i==0||i==1) return 1;
    else return i*fact(i-1);
}
int main(){
    int n;
    int series=0;
    printf("enterr a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){

        
        series=series+(1/fact(i));
        printf("1/%d+ ",fact(i));
    }
    
}