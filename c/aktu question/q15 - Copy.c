// 15.	Write a program to print the Fibonacci series.
#include <stdio.h>

// Function to generate and print Fibonacci series
// void fibonacci(int n) {
//     int first = 0, second = 1, next;

//     printf("Fibonacci Series up to %d terms: ", n);

//     for (int i = 0; i < n; i++) {
//         printf("%d, ", first);

//         next = first + second;
//         first = second;
//         second = next;
//     }

//     printf("\n");
// }

// int main() {
//     int terms;

//     // Get user input
//     printf("Enter the number of terms for Fibonacci series: ");
//     scanf("%d", &terms);

//     // Check if the number of terms is non-negative
//     if (terms < 0) {
//         printf("Number of terms should be non-negative.\n");
//     } else {
//         // Generate and print the Fibonacci series
//         fibonacci(terms);
//     }

//     return 0;
// }
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter a num");
    scanf("%d",&n);
    int first=0,second=1,next;
    printf("%d %d ",first,second);
    for (int i = 0; i <=n; i++)
    {
        next =first+second;
        first=second;
        second=next;
        printf("%d ",next);
        }
    return 0;
}


