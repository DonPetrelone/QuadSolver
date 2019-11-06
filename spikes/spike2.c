#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
    printf("%s\n", "Type the first floating point");

    float a = 0.0;
    scanf ("%f", &a);

    if (a == INFINITY)
    {
        printf("%s\n", "It is infinity");
    }
    else
    {
        printf("%s\n", "It is not infinity");
    }
}
