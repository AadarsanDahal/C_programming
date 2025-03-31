#include <stdio.h>
#include <stdlib.h> // For malloc and free
//Program using DMA to find the sum and avg  


int main (){

    int n, *ptr , sum = 0;
    float avg;

ptr = (int*)malloc(10*sizeof(int));

int i,a,b;


// inputting the array of ptr 
for (i=0;i<10;i++){
scanf("%d",&ptr[i]);
}

for (i=0;i<10;i++){
printf("%d",ptr[i]);
printf("\t");
}

//finding the sum 


for (i=0;i<10;i++){

    sum= sum + ptr[i];
}

printf("The sum of the array is: %d\n",sum);


/// printing avg 

avg= sum/10.0;

printf("The avg of the array is: %.2f\n",avg);
free(ptr);
    return 0;
}