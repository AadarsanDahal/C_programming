#include <stdio.h>

int main() {
    int n, *ptr, a[10], temp;
    ptr = a;

    // Input the number of elements
    printf("Enter the number of elements (max 10): ");
    scanf("%d", &n);  


    // Input the elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Bubble Sort using pointers
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) { 
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    // Printing sorted numbers
    printf("Sorted numbers in ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
