#include "qsCalc.h"

int calcOutput(qsVars *vars) {

    //logging
    if (vars->log == 1)
    {
        fprintf (stderr, "%s %s %f %f %f %f %f\n", "function: calcOutput;", "a, b, c, x1, x2", vars->a,
                vars->b, vars->c, vars->x1, vars->x2);
    }

  int ret = 0;
  int d;

  if (calcDiscriminant(vars, &d) || vars-> a == 0)
    ret = -1;
  else {
    vars->x1 = (-1 * vars->b + sqrt((double)d)) / (2 * vars->a);
    vars->x2 = (-1 * vars->b - sqrt((double)d)) / (2 * vars->a);

      //making sure x1 is smaller than x2
      if (vars->x1 > vars->x2)
      {
          double temp = vars->x1;
          vars->x1 = vars->x2;
          vars->x2 = temp;
      }

  }

    //logging
    if (vars->log == 1)
    {
        fprintf (stderr, "%s %s %d\n", "function: calcOutput;", "return:", ret);
    }

    return ret;
}

int calcDiscriminant(qsVars *vars, int *d) {

    //logging
    if (vars->log == 1)
    {
        fprintf (stderr, "%s %s %f %f %f %f %f %d\n", "function: calcDiscriminant;", "a, b, c, x1, x2, disc:", vars->a, vars->b,
                vars->c, vars->x1, vars->x2, *d);
    }

    int ret = 0;
    *d = vars->b * vars->b - 4 * vars->a * vars->c;

    if (*d < 0)
        ret = -1;

    //logging
    if (vars->log == 1)
    {
        fprintf (stderr, "%s %s %d\n", "function: calcDiscriminant;", "return:", ret);
    }

  return ret;
}
