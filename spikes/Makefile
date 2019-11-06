CC = gcc
CFLAGS = -Wall -pedantic -std=c11 -lm

spk1: spike1.o
	${CC} spike1.o ${CFLAGS} -o spk1

spk2: spike2.o
	${CC} spike2.o ${CFLAGS} -o spk2

spk3: spike3.o
	${CC} spike3.o ${CFLAGS} -o spk3

spike1 : spk1
	./spk1

spike2 : spk2
	./spk2

spike3 : spk3
	./spk3

clean:
	rm *.o spk1 spk2 spk3
