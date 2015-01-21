// Compute a number of iterates of the logistic map and print the result
#include <boost/multiprecision/mpfr.hpp>
#include <iostream>

using std::cout;
using std::endl;


using namespace boost::multiprecision;

int main(int argc, char** argv) {
	if(argc < 3) {
		cout << "please call this program with 2 parameters (number of iterations and precision in decimal digits)" << endl;
		return 0;
	}
	int num_iter = atoi(argv[1]);
	int prec = atoi(argv[2]);
	mpfr_float::default_precision(prec);
	mpfr_float a = 3.8;
	mpfr_float x = 0.4;
	cout << prec << " decimals" << endl;
	for(int i=0; i<=num_iter; i++) {
		cout << i << " " << x << endl;
		x = a*x*(1-x);	
	}
	return 0;
}
