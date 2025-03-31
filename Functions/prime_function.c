#include <stdio.h>

//to display if the number is prime or composite

//function prototypoing
int prime(int n);

int main(){
    int n;
	printf("This is a program to show if the number is prime or composite ");
	printf("\n");
	printf("Enter a number");
	scanf("%d",&n);
 
 int a = prime(n);
	
if(a>2){
	printf(" not a prime");
}
else{
	printf("prime");
	
}

	return 0;
}

int prime(int n){
	int i ,count=0;
    
    for(i=1;i<=n;i++){
		if(n%i==0)
			 count++;
	}
    return count;
}