#include <stdio.h>

// program to make assending order using pointer 

int main(){
    int n , *ptr, a[10], temp , n;
      ptr = a;

    // inputting the numbers 

    printf("Enter the number of elements (max 10): ");
    for (int i = 0 ; i<n; i++){
        scanf("%d", &a[i]);
    }

    // sorting using bubble sort 

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            if (*(ptr+i) > *(ptr+j)){
    temp = *(ptr+i);
    *(ptr+i) = *(ptr+j);
    *(ptr+j) = temp;
        }}
    }

    // printing the sorted numbers 

    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}