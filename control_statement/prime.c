#include <stdio.h>

//to display if the number is prime or composite
int main(){
	int a,b,n,i,count=0;
	printf("This is a program to show if the number is prime or composite ");
	printf("\n");
	printf("Enter a number");
	scanf("%d",&n);
	
	
	
	for(i=1;i<=n;i++){
		if(n%i==0)
			 count++;
	}
	
if(count>2){
	printf(" not a prime");
}
else{
	printf("prime");
	
}

	return 0;
}