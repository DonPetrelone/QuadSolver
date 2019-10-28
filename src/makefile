CC = gcc
CFLAGS = -std=C18 -Wall -pedantic -lm

qs : qs.o qsGather.o qsCalc.o qsOutput.o

qs.o qsGather.o : qsGather.h

qs.o qsCalc.o : qsCalc.h

qs.o qsOutput.o : qsOutput.h

qsGather.h qsCalc.h qsOutput.h : structs.h

clean :
  rm *.o core qs
  
run :
  ./qs
