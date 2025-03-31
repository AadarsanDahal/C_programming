// program to find the sum of n natural numbers entered by user using recursive function
// function prototyping

#include <stdio.h>

// function prototyping 
int sum(int n);

// function definition
int sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n * n + sum(n - 1);
    }
}

int main() {
    int n;
    printf("This is a program to show the sum of n natural numbers.\n");
    printf("Enter a non-negative number: ");
    scanf("%d", &n);
    
    // Input validation
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        printf("The sum of the first %d natural numbers is: %d\n", n, sum(n));
    }
    
    return 0;
}
