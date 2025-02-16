#include<stdio.h>

int main(){

    int i,j;


    for(i=5; i>=1 ; i--){
         for (j=5 ; j>i ;j--){
                printf(" ");        // for printing spaces
            }

            for (j=1 ; j<=i ;j++){
                printf("%d",j);   // for printing rows    
            }
             for (j=i-1 ; j>=1 ;j--){
                printf("%d",j);         // for printing columns
            }
            printf("\n");
           
      }

    return 0;
}   