#include "fibonacci.h"

std::map<int, unsigned long long int> initializeMap() {
	std::map<int, unsigned long long int> m;
	m[0] = 0;
	m[1] = 1;
	return m;
}

std::map<int, unsigned long long int> __fib_result_map = initializeMap();

unsigned long long int fibonacci(int seq) {
	using namespace std;
	map<int, unsigned long long int>& m = __fib_result_map;
#ifdef __DEBUG
	cerr << std::fixed;
	cerr.precision(0);
#endif
	if(m[seq] == 0 && seq != 0) {
		m[seq] = fibonacci(seq - 2) + fibonacci(seq - 1);
#ifdef __DEBUG			
		cerr << "Generated Fibonacci #" << seq << ": " << m[seq] << ".\n";
#endif
	}
#ifdef __DEBUG
	cerr << "Looked up Fibonacci #" << seq << ": " << m[seq] << ".\n";
#endif
	return m[seq];
}
