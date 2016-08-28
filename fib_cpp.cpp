#include "fibonacci.h"
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
	
	if(argc <= 1) {
		cerr << "No arguments specified. Usage: " << argv[0] << " <values>\n";
		return 1;
	}
	for(int i = 1; i < argc; i++) {
		cout << fibonacci(atoi(argv[i])) << endl;
	}
	return 0;
}
