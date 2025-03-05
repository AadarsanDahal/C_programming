/* WAP in C to find the sum of diagonal elements in a 3 x 3 matrix entered by the user*/
#include <stdio.h>

int main() {

int a[3][3] , i,j,k, sum=0;

printf("Enter the elements of the matrix: \n");
for (i=0; i<3; i++){
    for (j=0; j<3 ;j++){
        scanf("%d ", &a[i][j]);
      
    }


}

// to find the sum 

for (i=0; i<3; i++){

    for (j=0; j<3; j++){
        if (i==j)
        {
            sum= sum + a[i][j];
        }
    }
}

printf("The sum of diagonal elements is: %d\n", sum);
    return 0;
}