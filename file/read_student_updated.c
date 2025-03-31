#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks;
    char address[100];

    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("File does not exist\n");
        return 1;
    }

    while (fscanf(fp, "Name: %s Roll: %d Marks: %d Address: %s\n", name, &roll, &marks, address) != EOF) {
        printf("Name: %s\nRoll: %d\nMarks: %d\nAddress: %s\n", name, roll, marks, address);
    }
    fclose(fp);

    return 0;
}
