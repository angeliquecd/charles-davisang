all: runner.o fns.o
	gcc -o program runner.o fns.o

runner.o: runner.c fns.c
	gcc -c runner.c

fns.o: fns.c
	gcc -c fns.c
