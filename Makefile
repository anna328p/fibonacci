CC=g++
CFLAGS=-I.
DEPS = fibonacci.h
OBJ = fibonacci.o test_fib.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test_fib: $(OBJ)
	g++ -o $@ $^ $(CFLAGS)
