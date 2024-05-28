// #include<stdio.h>
// //Write a program to print the sum of even and odd numbers from 1 to N numbers.
// int main(int argc, char const *argv[])
// {
//     int n,sum_even =0,sum_odd=-0;
//     printf("enter a number");
//     scanf("%d",&n);
//     for (int i=0; i <=n; i++)
//     {
//         sum=sum+i;
//         if(i%2==0){
//               sum_even+=i;
//         }
//         else {
//              sum_odd+=i; 
//         }
//     }
//       printf("%d",sum);
    

//     return 0;
// }
#include <stdio.h>

int main() {
    int N, sum_even = 0, sum_odd = 0;

    // Get user input
    printf("Enter a number (N): ");
    scanf("%d", &N);

    // Calculate the sum of even and odd numbers
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            // i is even
            sum_even += i;
        } else {
            // i is odd
            sum_odd += i;
        }
    }

    // Print the sum of even and odd numbers
    printf("Sum of even numbers from 1 to %d: %d\n", N, sum_even);
    printf("Sum of odd numbers from 1 to %d: %d\n", N, sum_odd);

    return 0;
}
