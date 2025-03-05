/* WAP in C to find the product of two 3 x 3 matrices entered by the user */

#include <stdio.h>

int main () {

    int a[3][3] , b[3][3], c[3][3] ,i,j,k;

    printf("Enter the elements of first matrix: \n");
    for (i=0 ; i<3 ;i++)
    {
        for (j=0 ; j<3 ; j++)
        {
            scanf("%d", &a[i][j]);
        }

    }



    printf("Enter the elements of second  matrix: \n");
    for (i=0 ; i<3 ;i++)
    {
        for (j=0 ; j<3 ; j++)
        {
            scanf("%d", &b[i][j]);
        }

    }



for (i=0 ; i<3 ;i++)
{

    for (j=0 ; j<3 ; j++)
    {
      c[i][j]=0;
      
       for (k=0 ; k<3 ; k++)
      {
          c[i][j] = c[i][j] + a[i][k] * b[k][j];
          }
   
}}

printf("The product of two matrices is: \n");
for (i=0; i<3; i++)
{
    for (j=0; j<3; j++)
    {
        printf("%d ", c[i][j]); // Added space for better readability
    }
    printf("\n");

  
}


    return 0;
}
