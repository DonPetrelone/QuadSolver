CC = gcc
CFLAGS = -Wall -pedantic -std=c11 -lm

validate: validate_test.o validate.o

qsCalc: qsCalc_test.o qsCalc.o
	${CC} qsCalc_test.o qsCalc.o ${CFLAGS} -o qsCalc

validate_test.o: cunit.h validate.h

qsCalc_test.o : cunit.h  qsCalc.h

qsCalc.o: qsCalc.h structs.h

validate.o: validate.h

valtest: validate
	./validate

calctest: qsCalc
	./qsCalc

system: qsCalc validate
	./qsCalc
	./validate

clean:
	rm *.o validate qsCalc
