#include <stdio.h>

// WAP in C to write characters to a text file (student.txt) until the user presses the enter key.
int main() {
    FILE *fp;
    char ch;

    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("File does not exist\n");
        return 1;
    }


    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch); // Write the character to the file
    }

    fclose(fp);
   

    return 0;
}
