#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
    printf("%s\n", "Type the first floating point");

    float a = 0.0;
    scanf ("%f", &a);

    if (a != a)
    {
        printf("%s\n", "nan");
    }
    else
    {
        printf("%s\n", "NOT nan");
    }

}
