#include "qsCalc.h"

int calcOutput(qsVars *vars)
{

    int ret = 0;
    double d;

    if (calcDiscriminant(vars, &d) || vars-> a == 0)        // adjust r for different outcomes?
        ret = -1;
    else {
        vars->x1 = (-1 * vars->b - sqrt(d)) / (2 * vars->a);
        vars->x2 = (-1 * vars->b + sqrt(d)) / (2 * vars->a);
    }

    return ret;
}

int calcDiscriminant(qsVars *vars, double *d)
{

    int ret = 0;
    *d = vars->b * vars->b - 4 * vars->a * vars->c;

    if (*d < 0)
        ret = -1;

    return ret;
}
