#include "qsGather.h"
#include "qsCalc.h"
#include "qsOutput.h"

int main(int argc, char *argv[])
{
    qsVars *vars;
    vars = malloc(sizeof(qsVars));

    vars = doit();
    
    if (calcOutput(&vars))
        printf("No real solutions\n");
    else
        printOutput(&vars);

    return 0;
}
