#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
    printf("%s\n", "Type the first floating point");

    float a = 0.0;
    scanf ("%f", &a);

    printf("%s\n", "Type the second floating point");

    float b = 0.0;
    scanf ("%f", &b);

    printf("%s\n", "Type the level of precision");

    float p = 0.0;
    scanf ("%f", &p);

    printf("%f\n", fabs(a - b));

    if (fabs(a - b) <= p)
    {
        //considered equal
        printf("%s\n", "They are equal.");
    }
    else
    {
        //not equal
        printf("%s\n", "not equal");
    }

}
