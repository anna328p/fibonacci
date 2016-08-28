CC=g++
SET_DEBUG = 
CFLAGS = -I.
DEPS = fibonacci.h
OBJ = fibonacci.o fib_cpp.o 
RB_NAME = fib_ruby.rb

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

fib_cpp: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

ruby:
	chmod a+x $(RB_NAME)

all: fib_cpp ruby

CFLAGS += $(SET_DEBUG) 

debug: SET_DEBUG += -D__DEBUG
debug: all

clean: 
	rm *.o fib_cpp
