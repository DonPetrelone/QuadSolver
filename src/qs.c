#include "qsGather.h"
#include "qsCalc.h"
#include "qsOutput.h"
#include <string.h>

int main(int argc, char *argv[])
{
    qsVars *vars;
    vars = malloc(sizeof(qsVars));

    //checking if logging is on or off
    if (strcmp (argv[1], "on") == 0)
    {
        vars->log = 1;
    }
    else if (strcmp (argv[1], "off") == 0)
    {
        vars->log = 0;
    }

    if (doit(vars))
        printf("Error gathering input\n");
    else if (calcOutput(vars))
        printf("No real solutions\n");
    else
        printOutput(vars);

    return 0;
}
