#include "cunit.h"
#include "validate.h"
#include <stdlib.h>
#include "string.h"

int main()
{
    //test if you get inf
    //test if you get nan
    //test you get values that are not
    //cannot have more than the size of buffer

    cunit_print("validate tests should all pass.");
    cunit_date("\n");

    char line[80]; //input
    float d; //the variable that will be return
    float f;
    int ret; //return flag

    strcpy(line, "something");
    ret = validate(line, &d);
    assertd_eq("ret",ret,1);

    strcpy(line, "something just like this");
    ret = validate(line, &d);
    assertd_eq("ret",ret,1);

    strcpy(line, "1");
    f = 1.0;
    ret = validate(line, &d);
    assertd_eq("ret",ret,0);
    assertf_eq("d", d, f);

    strcpy(line, "1.0");
    f = 1.0;
    ret = validate(line, &d);
    assertd_eq("ret",ret,0);
    assertf_eq("d", d, f);

    strcpy(line, "1.0234234234");
    f = 1.0234234234;
    ret = validate(line, &d);
    assertd_eq("ret",ret,0);
    assertf_eq("d", d, f);


    return 0;
}
