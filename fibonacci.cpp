#include "fibonacci.h"

std::map<double, double> initializeMap() {
	std::map<double, double> m;
	m[0] = 0;
	m[1] = 1;
	return m;
}

std::map<double, double> __fib_result_map = initializeMap();

double fibonacci(double seq) {
	using namespace std;
	map<double, double>& m = __fib_result_map;
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
