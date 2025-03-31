#include <stdio.h>

//to display the multiplication of a num
int main(){
	int a,b,c,i;
	printf("This is a program to show the multiplication of a num entred by the user ");
	printf("\n");
	printf("Enter a number");
	scanf("%d",&a);
	
	for(i=1;i<=10;i++){
		int mul = a*i;
		printf("%d X %d = %d \n",a,i,mul);
	}

	return 0;
}