#include<stdio.h>

int rev (int);

int main(){


int a,b,c;
scanf("%d",&a);

rev(a);

    return 0;
}

int rev (int a ){

if (a==0){
    return 0;
}
else {
    return a*a*a+rev(a%10);
}
}