#include<stdio.h>

int main(){

    int a, b, c, d ,i,j;

int n=5;
    for(i=1; i<=n ; i++){
      for(int j=1; j<=i; j++){
          printf("%d ",i);
      }
      printf("\n");
    }
    return 0;
}