#include "qsGather.h"

int validate (char *line, float *d, int nLine, int log)
{

    //logging
    if (log == 1)
    {
        fprintf (stderr, "%s %s %s %f %d\n", "function: validate;","arguments:", line, *d, nLine);
    }

    int ret = 0;//return flag

    int j = 0;//iterate through line
    int count = 0;//count periods

    //check if line is number or not.
    while (ret == 0 && line[j] != '\0')
    {
        if (line[0] == '-')
        {
            j++;
        }

        if (line[j] != '\0')
        {
            if (line[j] == '.')
            {
                count++;
            }

            if (count < 2)
            {
                if (isdigit(line[j]) == 0 && line[j] != '.')
                {
                    printf("%s\n", "Not valid. Try again");
                    ret = 1; //not a digit
                }
            }
            else
            {
                printf("%s\n", "Not valid. Try again.");
                ret = 1;//not a digit
            }
        }
        j++;
    }

    *d = atof(line);//convert line into floating point.

    if (isnan(*d) != 0)//test for nan
    {
        ret = 2;
    }
    else if (isinf(*d) != 0)//test for infinity
    {
        ret = 3;
    }

    //logging
    if (log == 1)
    {
        fprintf (stderr, "%s %s %d\n", "function: validate;", "return:", ret);
    }

    /*
     * 1: character line is not composed of integer digits
     * 2: it is a nan.
     * 3: it is infinity
     * 0: OK
     */
    return ret;
}//End validate


int getit (char *line, int nLine, int log)
{

    //logging
    if (log == 1)
    {
        fprintf (stderr, "%s %s %s %d\n", "function: getit;","arguments:", line, nLine);
    }


    char c = 'a';

    //prints out a prompt to user with what letter it is time to get
    printf("%s%c%s\n", "Enter ", c + nLine, ": ");

    //scan for user input and stores it in the line buffer.
    int ret = scanf("%s", line);

    //logging
    if (log == 1)
    {
        fprintf (stderr, "%s %s %d\n", "function: getit;", "return:", ret);
    }

    //returns whatever is returned from the scan function.
    return ret;

}//End getit

int doit(qsVars *vars)
{
    //logging
    if (vars->log == 1)
    {
        fprintf (stderr, "%s %s %f %f %f %f %f\n", "function: doit;", "a, b, c, x1, x2", vars->a,
                 vars->b, vars->c, vars->x1, vars->x2);
    }

    int ret = 0;
    char line[80];
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;

    int i = 0;
    while (i < 3)
    {
        int j = 1;
        while (j != 0)
        {
            if (getit(line, i, vars->log) != 1)
            {
                perror("Could not scan line");
                ret = -1;
            }
            else
            {
                if (i == 0)
                {
                    j = validate(line, &a, i, vars->log);
                }
                else if (i == 1)
                {
                    j = validate(line, &b, i, vars->log);
                }
                else
                {
                    j = validate(line, &c, i, vars->log);
                }
            }
        }
        i++;
    }

    //setting a,b and c in the struct.
    vars->a = a;
    vars->b = b;
    vars->c = c;

    //logging
    if (vars->log == 1)
    {
        fprintf (stderr, "%s %s %d\n", "function: doit;", "return:", ret);
    }

    return ret;

}//End doit
