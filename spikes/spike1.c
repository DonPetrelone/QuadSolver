#include <stdlib.h>
#include <stdio.h>

int main ()
{
    printf("%s\n", "Type the first floating point");

    double a;
    scanf ("%f", a);

    printf("%s\n", "Type the second floating point");

    double b;
    scanf ("%f", b);

    printf("%s\n", "Type the level of precision");

    double p;
    scanf ("%f", p);

    if (a - b > p)
    {
        //considered not equal
        printf("%s\n", "They are not equal.");
    }
    else if (a - b < P)
    {
        //considered equal
        printf("%s\n", "They are equal.");
    }
}
