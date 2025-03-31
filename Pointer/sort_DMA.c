#include <stdio.h>
#include <stdlib.h>


//program to sort the arry made using DMA

int main (){
    int n, *ptr, temp;
    ptr = (int*)malloc(5*sizeof(int));  




        // input the number of elements


        printf("enter the number of elements: ");
        for(int i =0 ; i<5; i++){
            scanf("%d", &ptr[i]);

        }

    printf("the element of arrays are");

    for (int i=0; i<5; i++){
        printf("%d", ptr[i]);
        printf("\t");
    }


// now sorting the array 

for (int i =0 ; i<5 ; i ++ ){
    for(int j=0 ; j<5-1; j++){
        if(ptr[j]>ptr[j+1]){
            temp= ptr[j];
            ptr[j]=ptr[j+1];
            ptr[j+1]=temp;
        }
        printf("\n");
        }
        }

printf("the sorted array is: ");
for (int k =0 ; k<5; k++)
{
    printf("%d", ptr[k]);
    printf("\t");

}

free(ptr);
return 0;
    }
    




