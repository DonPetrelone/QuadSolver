#include "qsCalc.h"

int calcOutput(qsVars *vars) {
  int r = 0;
  int d;

  if (calcDiscriminant(vars, &d) || vars-> a == 0)        // adjust r for different outcomes?
    r = -1;
  else {
    vars->x1 = (-1 * vars->b + sqrt((double)d)) / (2 * vars->a);
    vars->x2 = (-1 * vars->b + sqrt((double)d)) / (2 * vars->a);
  }

  return r;
}

int calcDiscriminant(qsVars *vars, int *d) {
  int r = 0;
  *d = vars->b * vars->b - 4 * vars->a * vars->c;

  if (*d < 0)
    r = -1;

  return r;
}
