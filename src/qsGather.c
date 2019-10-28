#include "qsGather.h"

int validate (char *line, double d, int nLine)
{
    int ret = 0;//return flag

    int j = 0;//iterate through line
    int count = 0;//count periods

    //check if line is number or not.
    while (ret == 0 && line[j] != '\0')
    {
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

    d = atof(line);//convert line into floating point.

    if (isnan(d) != 0)//test for nan
    {
        ret = 2;
    }
    else if (isinf (d) != 0)//test for infinity
    {
        ret = 3;
    }

    /*
     * 1: character line is not composed of integer digits
     * 2: it is a nan.
     * 3: it is infinity
     * 0: OK
     */
    return ret;
}//End validate


int getit (char *line, int nLine)
{
    char c = 'a';

    //prints out a prompt to user with what letter it is time to get
    printf("%s%c%s\n", "Enter ", c + nLine, ": ");

    //scan for user input and stores it in the line buffer.
    int ret = scanf("%s", line);

    //returns whatever is returned from the scan function.
    return ret;
}//End getit

vars doit()
{

    char line[80];
    float a;
    float b;
    float c;

    int i = 0;
    while (i < 3)
    {
        int j = 1;
        while (j != 0)
        {
            if (getIt(line, i) != 1)
            {
                perror("Could not scan line");
            }
            else
            {
                j = validate(line, a, i);
            }
        }
        i++;
    }

}//End doit
