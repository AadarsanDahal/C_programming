#include<stdio.h>
#include<stdlib.h>


int main (){

 
    int n=0;
    char str[100];

    printf("enter a string ");
    scanf("%s",str);


    while(str[n]!='\0'){

        n++;
    }

    printf("the length of the string is %d", n);


    return 0;
}