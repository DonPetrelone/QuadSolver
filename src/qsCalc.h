#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct qsStruct {float a; float b; float c; double x1; double x2;} qsVars;

int calcOutput(qsVars *vars);

int calcDiscriminant(qsVars *vars, int *d);
