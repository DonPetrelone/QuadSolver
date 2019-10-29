#include "qsGather.h"
#include "qsCalc.h"
#include "qsOutput.h"

int main(int argc, char *argv[])
{
    qsVars *vars;
    vars = malloc(sizeof(qsVars));

    if (doit(vars))
        printf("Error gathering input\n");
    else if (calcOutput(vars))
        printf("No real solutions\n");
    else
        printOutput(vars);

    return 0;
}
