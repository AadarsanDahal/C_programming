#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, n, i;

    // Dynamic memory allocation using malloc
    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("Entered elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    // Using realloc to change size
    printf("\nEnter new size: ");
    scanf("%d", &n);
    ptr = (int*) realloc(ptr, n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    printf("Enter %d new elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("New elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr); // Free allocated memory
    return 0;
}
    