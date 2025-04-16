#include<stdio.h>

#define SIZE 10

int main() {
    int a[SIZE], temp;

    // Input array elements
    printf("Enter %d integers:\n", SIZE);
    for(int i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }

    // Corrected bubble sort implementation
    for(int i = 0; i < 10-1; i++) {
        for(int j = 0; j < 10-i-1; j++) {
            if(a[j] >a[j+1]) {
                // Swap elements
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }}

for(int i=0; i<10 ;i++){
    printf("%d ", a[i]);
}




return 0;
}

