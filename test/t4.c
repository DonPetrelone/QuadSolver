/*
* t4.c
*
* Unit tests for calcOutput()
* solves a * x^2 + b * x + c = 0
*    for the roots
* x1 and x2
*/
#include <stdlib.h>
#include "cunit.h"
#include "qsOutput.h"

int main() {
	double a, b, c;  //a, b, and c for the quadratic equation
	double tx1, tx2; //true roots of equation
	double x1, x2;   //Roots of equation from calcOutput()
	int ret;         // return value from calcOutput()

	a = 1.0;
	b = 2.0;
	c = 1.0;
	ret = calcOutput(a, b, c, &x1, &x2);
	assertd_eq("ret", ret, 0);
	assertf_eq("x1", x1, -1.0);
	assertf_eq("x2", x2, -1.0);

	tx1 = 3.1;
	tx2 = 3.3;
	a = 1.0;
	b = -tx1 + -tx2;
	c = tx1*tx2;
	ret = calcOutput(a, b, c, &x1, &x2);
	assertd_eq("ret", ret, 0);
	assertf_eqrerr("x1", x1, tx2, 100.0*DBL_EPSILON);
	assertf_eqrerr("x2", x2, tx1, 100.0*DBL_EPSILON);

	a = 1.0;
	b = -7.0;
	c = 12.0;
	tx1 = 4.0;
	tx2 = 3.0;
	ret = calcOutput(a, b, c, &x1, &x2);
	assertd_eq("ret", ret, 0);
	assertf_eq("x1", x1, tx1, 100.0*DBL_EPSILON);
	assertf_eq("x2", x2, tx2, 100.0*DBL_EPSILON);

	



	exit(0);


}

