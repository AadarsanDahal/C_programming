#include <stdio.h>
// Program to input using struct 

union student {
    char name[50];
    int roll;
    int marks;
}; // Added semicolon here

int main() {
    union student s[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter the following for student %d: name, roll, marks\n", i );
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll); // Added & to get the address
        printf("Marks: ");
        scanf("%d", &s[i].marks); // Added & to get the address
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        printf("Printing the following for student %d: name = %s\t roll = %d\t marks = %d\n", 
               i , s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
