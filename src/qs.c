#include "qsGather.h"
#include "qsCalc.h"
#include "qsOutput.h"
#include <string.h>

int main(int argc, char *argv[])
{
    printf("%s\n", "+---------- Quad Solver ------------+");

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
        //clear log.txt file
        fopen ("log.txt", "w");
    }

    if (doit(vars))
        printf("Error gathering input\n");
    else if (calcOutput(vars))
        printf("No real solutions\n");
    else
        printOutput(vars);

    printf("%s\n", "+-------------- Done ---------------+");

    return 0;
}
