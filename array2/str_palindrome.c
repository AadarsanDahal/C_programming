#include<stdio.h>
#include<string.h>



int main () {


    char str[100];
    int i,j,count=1;

printf("Enter a string: ");
scanf("%s",str);

int lenght = strlen(str);


for(i=0;i<lenght;i++){
    if(str[i] != str[ lenght-i -1]){
    count=0;
    break;
    }
}


printf("The string is: %d\n",count);

if(count == 1){
    printf("The string is a palindrome\n");
}else{
    printf("The string is not a palindrome\n");
}

    return 0;
}