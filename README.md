# fibonacci
Fibonacci number generator libraries and example programs

This repository includes libraries to generate Fibonacci numbers in C++. ~~It includes the GMP library for big number support, so you can, for example, compute the 1000th Fibonacci number.~~ Uses long doubles for now, but will include GMP later. The library will run on modern Linux systems, on any x86 CPU. 

The repository also includes an implementation of the same library in Ruby; it is much simpler, but much slower.

The library dynamically computes lower Fibonacci numbers and stores them in a hash map, which it later uses to create the higher Fibonacci numbers. Because of this, the program is much faster than standard generation algorithms. It will also re-use calculations from previous calculations to calculate other Fibonacci numbers, making smaller Fibonacci numbers much faster to generate if you generate a large one first.

The repo also includes some example programs using the library, in C and Ruby.
To compile, run ```make```. To delete all executables and object files, run ```make clean```. To compile debug build which prints debugging information, run ```make debug```. To run the Ruby version as debug, run ```ruby -d fib_ruby.rb <args>```.

The executables are named ```fib_cpp``` and ```fib_ruby.rb```. They accept an infinite amount of integer arguments.

This is my first attempt at [dynamic programming](https://en.wikipedia.org/wiki/Dynamic_programming) and result caching. 
