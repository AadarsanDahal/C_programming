#include <stdio.h>
#include <stdlib.h>

// Function to check if a number is prime
int isprime(int num) {
    if (num < 2) return 0;  // 0 and 1 are not prime numbers
    for (int i = 2; i <= num; i++) {  // Optimize by checking up to sqrt(num)
        if (num % i == 0) return 0;  // Not prime
    }
    return 1;  // Prime number
}

int main() {
    FILE *fptr1, *fptr2;
    int num;

    // Open num.txt for reading
    fptr1 = fopen("num.txt", "r");
    if (fptr1 == NULL) {
        printf("File num.txt not found\n");
        exit(1);
    }

    // Open prime.txt for writing
    fptr2 = fopen("prime.txt", "w");
    if (fptr2 == NULL) {
        printf("Error opening prime.txt\n");
        fclose(fptr1);
        exit(1);
    }

    // Read numbers from num.txt and check for primes
    while (fscanf(fptr1, "%d", &num) != EOF) {
        printf("Reading from num.txt: %d\n", num);

        if (isprime(num)) {
            printf("%d is a prime number\n", num);
            fprintf(fptr2, "%d\n", num);  // Write prime numbers to prime.txt
        } else {
            printf("%d is not a prime number\n", num);
        }
    }

    fclose(fptr1);
    fclose(fptr2);
    printf("Prime numbers written to prime.txt\n");

    return 0;
}
