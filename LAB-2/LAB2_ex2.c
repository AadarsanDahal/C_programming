#include <stdio.h>
#include <math.h> // Required for sqrt()

int main()
{
    float a, b, c, d;

    printf("enter the first coefficent ");
    scanf("%f", &a);
    printf("enterathe second coefficent ");
    scanf("%f", &b);
    printf("enterathe third coefficent ");
    scanf("%f", &c);

    float discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {

        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are: %f and %f\n", root1, root2);
    }
    else if (discriminant == 0)

    {
        float root0 = -b / 2 * a;
        printf("the root is %f", root0);
    }
    else
    {
        printf("Roots are imaginary");
    }

    return 0;
}
