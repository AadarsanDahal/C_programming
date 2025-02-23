#include <stdio.h>

int main (){

    int n;
    int a[100];

    printf("enter number: ");
    scanf("%d", &n);

    printf("Start entering numbers");

    for(int i =0 ; i<n ; i++){
        scanf("%d", &a[i]);
    }

    for (int i=0; i<n-1;i++){  ///entering the first loop for comparing the first element with the rest of the elements
            for(int j=i+1; j<n; j++){    ///entering the second loop for changing elements inside the array .
                if(a[i]>a[j]){
                    int temp = a[i];  ///swapping the elements
                    a[i] = a[j];   ///swapping the elements with a[i] and a[j]
                    a[j] = temp;   //again swapping the elements
                }
            }

    }



    printf("Sorted array in assending order is : ");
    for(int i =0 ; i<n ; i++){
        printf("%d ", a[i]);
    }

    return 0;
}