# fibonacci
Fibonacci number generator programs

To compile, run ```make```. To delete all executables and object files, run ```make clean```. To compile debug build which prints debugging information, run ```make debug```.

The executables are named ```fib_cpp``` and ```fib_ruby.rb```. They accept arguments of integers. The program dynamically computes lower Fibonaccinumbers and stores them in a hash map, which it later uses to create the higher Fibonacci numbers. Because of this, the program is much faster than standard generation algorithms. It will also re-use calculations from previous arguments to re-calculate the next one. Therefore, if you specify arguments of 10 and 8, the second result will be outputted almost instantly.

This is my first attempt at [dynamic programming](https://en.wikipedia.org/wiki/Dynamic_programming) and result caching. 
