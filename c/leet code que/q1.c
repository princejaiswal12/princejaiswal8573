#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int x) {
    int p=0;
    int k=x;
    for(int i=1;x>0;i++){
    int j=x%10;
    x=x/10;
    p=p*10+j;
    }
    if(p==k){
        return true;
    }
    else return false;
}
int main(int argc, char *argv[]){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    isPalindrome(n);
    if(isPalindrome(n)){
        printf(" yes %d",n);
    }
    else printf("not %d",n);
    return 0;
}