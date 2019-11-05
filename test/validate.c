#include validate.h

int validate (char *line, float *d, int nLine)
{

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

    /*
     * 1: character line is not composed of integer digits
     * 2: it is a nan.
     * 3: it is infinity
     * 0: OK
     */
    return ret;

}//End validate