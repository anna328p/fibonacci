CC=g++
CFLAGS=-I.
DEPS = fibonacci.h
OBJ = fibonacci.o fib_cpp.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

fib_cpp: $(OBJ)
	g++ -o $@ $^ $(CFLAGS)

all: fib_cpp
	chmod a+x fib_ruby.rb

clean: 
	rm *.o fib_cpp
