#ifndef VALIDATE_H
#define VALIDATE_H

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "structs.h"

/**
 *
 * @param line
 * @param d
 * @param nLine
 * @return an integer stating what the result was
 */
int validate (char *line, double d, int nLine);

/**
 *
 * @param line line taken from the user
 * @param nLine line number
 * @return return if the operation was successful or not through an integer.
 */
int getit (char *line, int nLine);

/**
 *
 * @return
 */
vars doit();

#endif