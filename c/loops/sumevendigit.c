  #include<stdio.h>
 int main()
 {
    int n,sum=0,ld,i=1;
    printf("Enter a numb =");
    scanf("%d",&n);
    while (n>0)
    {
        n=n/10;
        ld=n%10;
        i++;
        if(i%2==0){
            sum=sum+ld;
        }

        
    }
    printf("%d",sum);
    
    return 0;
 }