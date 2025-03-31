#include <stdio.h>
// Program to input using struct 

struct student {
    char name[50];
    int roll;
    int marks;
}; // Added semicolon here

int main() {
    struct student s[3];
    struct student temp;

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
    for (int j = 0; j < 3; j++) {
        if (s[i].marks < s[j].marks) {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
    }

}
//printing according to marks 
for (int i = 0; i < 3; i++) {
    printf("Printing the following for student %d: name = %s\t roll = %d\t marks = %d\n", 
           i , s[i].name, s[i].roll, s[i].marks);
}
    return 0;
}
