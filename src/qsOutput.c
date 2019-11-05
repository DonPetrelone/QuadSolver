#include "qsOutput.h"

void printOutput(qsVars *vars)
{
    //logging
    if (vars->log == 1)
    {
        fprintf (stderr, "%s %s %f %f %f %f %f\n", "function: printOutput;", "a, b, c, x1, x2", vars->a,
                 vars->b, vars->c, vars->x1, vars->x2);
    }

	printf("x1 = %.4g\nx2 = %.4g\n", vars->x1, vars->x2);

}





