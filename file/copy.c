#include <stdio.h>
#include <stdlib.h>

// WAP to copy the content of student to another destination file 

int main() {
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("student.txt", "r");
    if (fp1 == NULL) {
        printf("File does not exist\n");
        return 1;
    }

    fp2 = fopen("destination.txt", "w");
    if (fp2 == NULL) {
        printf("File does not exist\n");
        fclose(fp1); // Close the first file before exiting
        return 1;
    }

    // Read from fp1 and write to fp2
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);
    printf("Data has been written to destination.txt\n");

    return 0;
}

