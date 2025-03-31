#include <stdio.h>
//program to input using struct 

struct student {
    char name [50];
    int roll;
    int marks;
}

int main (){
 struct student s[3];

 for(int i=0; i<3; i++){
printf("enter the following for 10 students name , roll, marks")
scanf("%s", s[i].name);
printf(\n);
scanf("%d", s[i].roll);
printf(\n);
scanf("%d", s[i].marks);
printf(\n);
 }



 for(int i=0; i<3; i++){
printf("printing  the following for 10 students name , roll, marks");

printf("student %d record  name =%s /t roll=%d /t marks = %d  ",i,s[i].name,s[i].roll,s[i].marks);

 }


    return 0;
}