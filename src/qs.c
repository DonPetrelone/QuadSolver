#include "qsGather.h"
#include "qsCalc.h"
#include "qsOutput.h"

int main(int argc, char *argv[])
{
    qsVars *vars;
    vars = malloc(sizeof(qsVars));

    vars = doit();

    printf("%f\n", vars->a);
    printf("%f\n", vars->b);
    printf("%f\n", vars->c);

    return 0;
}
