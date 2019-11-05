#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "structs.h"

/**
 *
 * @param line given by user
 * @param d float that stores either a, b or c
 * @param nLine which float it is
 * @param log determines if logging is on or off
 * @return an integer stating what the result was
 */
int validate (char *line, float *f, int nLine, int log);

/**
 *
 * @param line line taken from the user
 * @param nLine line number
 * @param log determines if logging is on or off
 * @return return if the operation was successful or not through an integer.
 */
int getit (char *line, int nLine, int log);

/**
 * Runs the getit and validate functions.
 * @return indicates success or error
 */
int doit(qsVars *vars);

