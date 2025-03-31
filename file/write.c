#include <stdio.h>

// WAP in C to write characters to a text file (student.txt) until the user presses the enter key.
int main() {
    FILE *fp;
    char ch;

    fp = fopen("student.txt", "w");
    if (fp == NULL) {
        printf("File does not exist\n");
        return 1;
    }

    printf("Enter the text and press enter key to stop\n");

    // Use getchar() to capture each character until Enter key (newline) is pressed
    while ((ch = getchar()) != '\n') {
        fputc(ch, fp); // Write the character to the file
    }

    fclose(fp);
    printf("Data has been written to student.txt\n");

    return 0;
}
