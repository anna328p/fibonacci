CC=g++
SET_DEBUG = 
CFLAGS=-I.
DEPS = fibonacci.h
OBJ = fibonacci.o fib_cpp.o 

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

fib_cpp: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

all: fib_cpp
	chmod a+x fib_ruby.rb

CFLAGS += $(SET_DEBUG) 

debug: SET_DEBUG += -DDEBUG
debug: all

clean: 
	rm *.o fib_cpp
