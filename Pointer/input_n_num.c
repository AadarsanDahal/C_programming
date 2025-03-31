#include <stdio.h>

int main() {
    int n, *ptr, a[10];
    ptr = a; // Initialize pointer to the first element of the array

    printf("Enter the number of elements (max 10): ");
    scanf("%d", &n);

    // Check if n exceeds the array size
  

    // Inputting the numbers
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); // Use &a[i] to store the input in the array
    }

    // Printing the numbers
    printf("The numbers are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]); // Print each number with a space
    }
    printf("\n"); // New line after printing all numbers

    return 0;
}
