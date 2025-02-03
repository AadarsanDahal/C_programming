#include <stdio.h>

int main()
{
    int a, b, c;
    printf("A program to find the greatest amont 3 numbers  \n");

    printf("Enter the first number ");
    scanf("%d", &a);
    printf("Enter the second number ");
    scanf("%d", &b);
    printf("Enter the third number ");
    scanf("%d", &c);

    if (a > b) // here we comaper a with b
    {
        if (a > c) // so we know that a is greater than b so if it is greater than c also then a is the greatest
        {
            printf("a is the greatest\n");
        }
        else // if not then a is greater than b but not than c so c is the greatest
        {
            printf("c is the greatest \n");
        }
    }
    else if (b > c)
    {

        printf("b is the greatest \n"); // if a is not greater than b then we compare b with c and if b is greater than c then b is the greatest
    }
    else
    {
        printf("c is the greatest \n"); // if comapring with b then false then c is greatest
    }

    return 0;
}