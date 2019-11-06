CC = gcc
CFLAGS = -Wall -pedantic -std=c11 -lm

validate: validate_test.o validate.o

calc: qsCalc_test.o qsCalc.o

validate_test.o : cunit.h validate.h

qsCalc_test.o : cunit.h  qsCalc.h

valtest: validate
    ./validate

calctest: calc
    ./calc

clean:
    -rm