#include "fibonacci.h"

bool __FIB_DEBUG = true;

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
	bool& dbg = __FIB_DEBUG;
	if(dbg) {
		cerr << std::fixed;
		cerr.precision(0);
	}
	if(m[seq] == 0 && seq != 0) {
		m[seq] = fibonacci(seq - 2) + fibonacci(seq - 1);
		if(dbg) {
			cerr << "Generated Fibonacci #" << seq << ": " << m[seq] << ".\n";
		}
	}
	if(dbg) {
		cerr << "Looked up Fibonacci #" << seq << ": " << m[seq] << ".\n";
	}
	return m[seq];
}
