CC = gcc
CFLAGS =-g -Wall -pedantic -lm

qs : qs.o qsGather.o qsCalc.o qsOutput.o
	${CC} qs.o qsGather.o qsCalc.o qsOutput.o ${CFLAGS} -o qs

qs.o qsGather.o : qsGather.h

qs.o qsCalc.o : qsCalc.h

qs.o qsOutput.o : qsOutput.h

qsGather.h qsCalc.h qsOutput.h : structs.h

clean :
	rm *.o qs
  
logon: qs
	./qs on 2>log.txt

logoff: qs
	./qs off
