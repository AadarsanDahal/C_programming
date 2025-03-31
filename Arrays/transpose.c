#include<stdio.h>

int main() {
 
    int a[10][10],i,j,m,n;
printf("Enter the order:");
scanf("%d%d",&m,&n);


    for(int i = 0; i < n; i++) {  // for controlling rows 
        for(int j = 0; j < m; j++) {  // for controlling columns
        printf("Enter the element a[%d][%d]:",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("the transposed matrix is\n");

    for(int i=0 ; i<n; i++){  //to select row 
        for(int j=0; j<m; j++){  //to select column
            printf("%d ", a[j][i]);
        }
        printf("\n");

    }

    return 0;
}
