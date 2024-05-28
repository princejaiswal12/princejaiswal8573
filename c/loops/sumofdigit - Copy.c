 #include<stdio.h>
 int main()
 {
    int n,sum=0,ld;
    printf("Enter a numb =");
    scanf("%d",&n);
    while (n!=0)
    {
        ld=n%10;
        n=n/10;
        sum=sum+ld;
        
    }
    printf("%d",sum);
    
    return 0;
 }