#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function: a = %d, b = %d\n", a, b);
}

void add(int *a,int*b){
 int sum=0 ;

 printf("Enter two numbers: ");
    sum = *a + *b;
    printf("Sum = %d\n", sum);

}

int main() {
    int x = 5, y = 10;
    printf("Before function call: x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("After function call: x = %d, y = %d\n", x, y);
    add(&x,&y);
    printf("After add function call: x = %d, y = %d\n", x, y);
    return 0;
}
