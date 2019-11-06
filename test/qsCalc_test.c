#include "cunit.h"
#include "qsCalc.h"
#include <stdlib.h>

int main()
{

    qsVars *vars;
    vars = malloc (sizeof(qsVars));
    double  tx1, tx2;  // "true" eRoots of equation
    int	ret;       // return value from calcOutput

//
    cunit_print("t1 tests should all pass");
    cunit_date("\n");

// the first few check for correct order vars->vars->x1 < vars->vars->x2 as well as correct values
    tx1 = 1.0;
    tx2 = 2.0;
    vars->a = 1.0;
    vars->b = -tx1 + -tx2;
    vars->c = tx1*tx2;
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eq("vars->vars->x1",vars->x1,tx1);
    assertf_eq("vars->vars->x2",vars->x2,tx2);

    tx1 = 1.0;
    tx2 = 2.0;
    vars->a = -1.0;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*( tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eq("vars->vars->x1",vars->x1, tx1);
    assertf_eq("vars->vars->x2",vars->x2, tx2);

    tx1 = -2.0;
    tx2 = 1.0;
    vars->a = 1.0;
    vars->b = -tx1 + -tx2;
    vars->c = tx1*tx2;
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eq("vars->vars->x1",vars->x1, tx1);
    assertf_eq("vars->vars->x2",vars->x2, tx2);

    tx1 = -2.0;
    tx2 = 1.0;
    vars->a = -1.0;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*( tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eq("vars->vars->x1",vars->x1, tx1);
    assertf_eq("vars->vars->x2",vars->x2, tx2);

    tx1 = -2.0;
    tx2 = -1.0;
    vars->a = 1.0;
    vars->b = -tx1 + -tx2;
    vars->c = tx1*tx2;
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eq("vars->vars->x1",vars->x1, tx1);
    assertf_eq("vars->vars->x2",vars->x2, tx2);

    tx1 = -2.0;
    tx2 = -1.0;
    vars->a = -1.0;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*( tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eq("vars->vars->x1",vars->x1, tx1);
    assertf_eq("vars->vars->x2",vars->x2, tx2);

    tx1 = -3.0;
    tx2 = -3.0;
    vars->a = 1.0;
    vars->b = -tx1 + -tx2;
    vars->c = tx1*tx2;
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eq("vars->vars->x1",vars->x1, tx1);
    assertf_eq("vars->vars->x2",vars->x2, tx2);

    tx1 = -3.0;
    tx2 = -3.0;
    vars->a = -13.0;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*( tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eq("vars->vars->x1",vars->x1, tx1);
    assertf_eq("vars->vars->x2",vars->x2, tx2);

    tx1 = 3.0;
    tx2 = 3.0;
    vars->a = 1.0;
    vars->b = -tx1 + -tx2;
    vars->c = tx1*tx2;
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eq("vars->vars->x1",vars->x1, tx1);
    assertf_eq("vars->vars->x2",vars->x2, tx2);

    tx1 = 3.0;
    tx2 = 3.0;
    vars->a = -17.0;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*( tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eq("vars->vars->x1",vars->x1, tx1);
    assertf_eq("vars->vars->x2",vars->x2, tx2);

    tx1 = 0.0;
    tx2 = 5.0;
    vars->a = 1.0;
    vars->b = -tx1 + -tx2;
    vars->c = tx1*tx2;
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eq("vars->vars->x1",vars->x1, tx1);
    assertf_eq("vars->vars->x2",vars->x2, tx2);

    tx1 = 0.0;
    tx2 = 5.0;
    vars->a = 19.0;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*( tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eq("vars->vars->x1",vars->x1, tx1);
    assertf_eq("vars->vars->x2",vars->x2, tx2);

    tx1 = 0.0;
    tx2 = 5.0;
    vars->a = -19.0;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*( tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eq("vars->vars->x1",vars->x1, tx1);
    assertf_eq("vars->vars->x2",vars->x2, tx2);

    tx1 = -5.0;
    tx2 = 0.0;
    vars->a = 1.0;
    vars->b = -tx1 + -tx2;
    vars->c = tx1*tx2;
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eq("vars->vars->x1",vars->x1, tx1);
    assertf_eq("vars->vars->x2",vars->x2, tx2);

    tx1 = 0.0;
    tx2 = 5.0;
    vars->a = 23.0;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*( tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eq("vars->vars->x1",vars->x1, tx1);
    assertf_eq("vars->vars->x2",vars->x2, tx2);

    tx1 = 0.0;
    tx2 = 5.0;
    vars->a = -23.0;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*( tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eq("vars->vars->x1",vars->x1, tx1);
    assertf_eq("vars->vars->x2",vars->x2, tx2);

    tx1 = 0.0;
    tx2 = 0.0;
    vars->a = 1.0;
    vars->b = -tx1 + -tx2;
    vars->c = tx1*tx2;
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eq("vars->vars->x1",vars->x1, tx1);
    assertf_eq("vars->vars->x2",vars->x2, tx2);

    tx1 = 0.0;
    tx2 = 0.0;
    vars->a = 7.0;
    vars->b = -tx1 + -tx2;
    vars->c = tx1*tx2;
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eq("vars->vars->x1",vars->x1, tx1);
    assertf_eq("vars->vars->x2",vars->x2, tx2);

    tx1 = 0.0;
    tx2 = 0.0;
    vars->a = -11.0;
    vars->b = -tx1 + -tx2;
    vars->c = tx1*tx2;
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eq("vars->vars->x1",vars->x1, tx1);
    assertf_eq("vars->vars->x2",vars->x2, tx2);

    //t2 tests

    char	mess[100]; // for message to cunit_print))
// check for loss of less than about 3 binary places
    double rerr = DBL_EPSILON*4;
//
    snprintf(mess, 99, "t2 tests should all pass with rerr=%8.4g", rerr);
    cunit_print(mess)
    cunit_date("\n");

// the first few check for correct order vars->x1 < vars->x2 as well as correct values
    tx1 = 1.1;
    tx2 = 2.1;
    vars->a =1.0;
    vars->b= -tx1 + -tx2;
    vars->c = tx1*tx2;
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eqrerr("vars->x1",vars->x1,tx1,rerr);
    assertf_eqrerr("vars->x2",vars->x2, tx2,rerr);

    tx1 = 1.1;
    tx2 = 2.1;
    vars->a = -1.1;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*(tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eqrerr("vars->x1",vars->x1, tx1,rerr);
    assertf_eqrerr("vars->x2",vars->x2, tx2,rerr);

    tx1 = -2.1;
    tx2 = 1.1;
    vars->a = 1.0;
    vars->b = -tx1 + -tx2;
    vars->c = tx1*tx2;
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eqrerr("vars->x1",vars->x1, tx1,rerr);
    assertf_eqrerr("vars->x2",vars->x2, tx2,rerr);

    tx1 = -2.1;
    tx2 = 1.1;
    vars->a = -1.1;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*(tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eqrerr("vars->x1",vars->x1, tx1,rerr);
    assertf_eqrerr("vars->x2",vars->x2, tx2,rerr);

    tx1 = -2.1;
    tx2 = -1.1;
    vars->a = 1.0;
    vars->b = -tx1 + -tx2;
    vars->c = tx1*tx2;
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eqrerr("vars->x1",vars->x1, tx1,rerr);
    assertf_eqrerr("vars->x2",vars->x2, tx2,rerr);

    tx1 = -2.1;
    tx2 = -1.1;
    vars->a = -1.1;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*(tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eqrerr("vars->x1",vars->x1, tx1,rerr);
    assertf_eqrerr("vars->x2",vars->x2, tx2,rerr);

    tx1 = -3.1;
    tx2 = -3.1;
    vars->a = 1.0;
    vars->b = -tx1 + -tx2;
    vars->c = tx1*tx2;
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eqrerr("vars->x1",vars->x1, tx1,rerr);
    assertf_eqrerr("vars->x2",vars->x2, tx2,rerr);

    tx1 = -3.1;
    tx2 = -3.1;
    vars->a = -13.1;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*(tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eqrerr("vars->x1",vars->x1, tx1,rerr);
    assertf_eqrerr("vars->x2",vars->x2, tx2,rerr);

    tx1 = 3.1;
    tx2 = 3.1;
    vars->a = 1.0;
    vars->b = -tx1 + -tx2;
    vars->c = tx1*tx2;
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eqrerr("vars->x1",vars->x1, tx1,rerr);
    assertf_eqrerr("vars->x2",vars->x2, tx2,rerr);

    tx1 = 3.1;
    tx2 = 3.1;
    vars->a = -17.1;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*(tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eqrerr("vars->x1",vars->x1, tx1,rerr);
    assertf_eqrerr("vars->x2",vars->x2, tx2,rerr);

    tx1 = 0.1;
    tx2 = 5.1;
    vars->a = 1.0;
    vars->b = -tx1 + -tx2;
    vars->c = tx1*tx2;
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eqrerr("vars->x1",vars->x1, tx1,rerr);
    assertf_eqrerr("vars->x2",vars->x2, tx2,rerr);

    tx1 = 0.1;
    tx2 = 5.1;
    vars->a = 19.1;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*(tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eqrerr("vars->x1",vars->x1, tx1,rerr);
    assertf_eqrerr("vars->x2",vars->x2, tx2,rerr);

    tx1 = 0.1;
    tx2 = 5.1;
    vars->a = -19.1;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*(tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eqrerr("vars->x1",vars->x1, tx1,rerr);
    assertf_eqrerr("vars->x2",vars->x2, tx2,rerr);

    tx1 = -5.1;
    tx2 = 0.1;
    vars->a = 1.0;
    vars->b = -tx1 + -tx2;
    vars->c = tx1*tx2;
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eqrerr("vars->x1",vars->x1, tx1,rerr);
    assertf_eqrerr("vars->x2",vars->x2, tx2,rerr);

    tx1 = 0.1;
    tx2 = 5.1;
    vars->a = 23.1;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*(tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eqrerr("vars->x1",vars->x1, tx1,rerr);
    assertf_eqrerr("vars->x2",vars->x2, tx2,rerr);

    tx1 = 0.1;
    tx2 = 5.1;
    vars->a = -23.1;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*(tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eqrerr("vars->x1",vars->x1, tx1,rerr);
    assertf_eqrerr("vars->x2",vars->x2, tx2,rerr);

    tx1 = 0.1;
    tx2 = 0.1;
    vars->a = 1.0;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*(tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eqrerr("vars->x1",vars->x1, tx1,rerr);
    assertf_eqrerr("vars->x2",vars->x2, tx2,rerr);

    tx1 = 0.1;
    tx2 = 0.1;
    vars->a = 1.0;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*(tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eqrerr("vars->x1",vars->x1, tx1,rerr);
    assertf_eqrerr("vars->x2",vars->x2, tx2,rerr);

    tx1 = 0.1;
    tx2 = 0.1;
    vars->a = -11.1;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*(tx1*tx2);
    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eqrerr("vars->x1",vars->x1, tx1,rerr);
    assertf_eqrerr("vars->x2",vars->x2, tx2,rerr);

    //test discriminant

    double	disc;      // discriminant b^2 - 4ac
    double	disc1;     // discriminant/b^2  = 1 - 4ac/(b*b)
    double	qx1;      // -b/(2.0*vars->a)  double root value...

    snprintf(mess, 99, "test_discriminant for development with rerr=%8.4g", rerr);
    cunit_print(mess)
    cunit_date("\n");


// bad discriminant < 0
    tx1 = 3.1;
    tx2 = 3.1;
    vars->a = -17.1;
    vars->b = vars->a*(-tx1 + -tx2);
    vars->c = vars->a*(tx1*tx2);
    printf("Before tx1=%24.19g tx2=%24.19g\n        x1=%24.19g x2=%24.19g\n vars->a=%24.19g b=%24.19g c=%24.19g\n",
           tx1, tx2, vars->x1,vars->x2,vars->a,vars->b, vars->c);
    disc = vars->b*vars->b - 4.0*vars->a*vars->c;
    printf("disc=%24.19g\n", disc);
// disc1 might be safer to check than disc as disc is not vars->a relative error type
// could test disc1 > -DBL_EPSILON*n as == 0.0
    disc1 = 1.0 - 4.0*vars->a*vars->c/(vars->b*vars->b);
    printf("disc1=%24.19g\n", disc1);
    qx1 = -vars->b/(2.0*vars->a);
    printf("-b/(2.0*vars->a)=%24.19g\n", qx1);

    ret = calcOutput(vars);
    assertd_eq("ret",ret,0);
    assertf_eqrerr("x1",vars->x1, tx1,rerr);
    assertf_eqrerr("x2",vars->x2, tx2,rerr);

    printf("After  tx1=%24.19g tx2=%24.19g\n        x1=%24.19g x2=%24.19g\n vars->a=%24.19g b=%24.19g c=%24.19g\n",
           tx1, tx2, vars->x1, vars->x2, vars->a, vars->b, vars->c);

    return 0;
}