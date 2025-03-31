//WAP in C to write the name, roll, marks and address of n students to a data file using the  concept of fprintf().

#include <stdio.h>

int main(){
 int n;
 FILE *fp;
 fp = fopen("data.txt","w");
    if (fp == NULL){
        printf("File does not exist\n");
        return 1;
    }
    printf("Enter the number of students: ");
    scanf("%d", &n);

char name[50], address[50];
int roll;
int marks;

//taking input 
for (int i = 0; i < n; i++){
    printf("enter for student %d",i+1);
    scanf("%s %d %d %s", name, &roll, &marks, address);
    
}

//printing and printing in file 
for (int i = 0; i < n; i++){
    fprintf(fp, "Name: %s\nRoll: %d\nMarks: %d\nAddress: %s\n", name, roll, marks, address);
    printf("Name: %s\nRoll: %d\nMarks: %d\nAddress: %s\n", name, roll, marks, address);
}
fclose(fp);
    return 0;
}