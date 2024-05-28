
#include<stdio.h>
int main(){
      int n,i;
      printf("Enter number\n");
      scanf("%d",&n);
      for(i=2;i<n;i++){
        n%i==0 ? printf(" Not Prime\n"): printf("prime");
      }
}

