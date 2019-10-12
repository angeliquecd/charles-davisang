all: runner.o fns.o
	gcc -o program runner.o fns.o

runner.o: runner.c fns.h
	gcc -c runner.c

fns.o: fns.c fns.h
	gcc -c fns.c
run:
	./program
