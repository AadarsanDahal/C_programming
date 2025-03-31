#include <stdio.h>

//factorial using recursive function

//function prototypoing

int factorial(int n);

int main (){
    int n;
    printf("This is a program to show the factorial of a number ");
    printf("\n");
    printf("Enter a number");
    scanf("%d",&n);
    
    int a = factorial(n);
    printf("The factorial of %d is %d",n,a);
    return 0;
}

int factorial(int n){
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}