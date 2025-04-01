#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        // Display menu
        printf("\nCalculator Menu:\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Exit condition
        if (choice == 5) {
            printf("Exiting program...\n");
            break;
        }

        // Input numbers
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        // Perform operation based on choice
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            case 4:
                if (num2 == 0)
                    printf("Error! Division by zero is not allowed.\n");
                else {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                }
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
