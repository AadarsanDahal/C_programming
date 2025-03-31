
#include <stdio.h> 

//fucntionn prototype with return type int and arg
int add(int a, int b) {
    return a + b;
}

//function prototype with no return type and no arg 
void print() {
    printf("Hello World\n");
}

//function with no return type and  arg
void addion(int a, int b) {
   printf("Sum of %d and %d is %d\n", a, b, a+b);
    
}    
//with no return type and no arg 
void sub() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("diff of %d and %d is %d\n", a, b, a-b);
}


int main () {
    int sum;
    sum = add(10, 20);
    printf("Sum of 10 and 20 is %d\n", sum);
    print();
    addion(10, 20);
    sub();
    return 0;
}