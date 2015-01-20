// Use iRRAM to compute an exact orbit for the logistic map

#include "iRRAM/lib.h"
#include "iRRAM/core.h"

using std::endl;
using namespace iRRAM;


template int iRRAM_exec <int, char **> (int (*) (int, char **),int, char **);
int iRRAM_compute(int argc, char **argv) {
	int num_iter = atoi(argv[1]);
	REAL a = 3.8;
	REAL x = 0.4;
	for(int i=0; i<=num_iter; i++) {
		cout << i << " " << x << endl;
		x = a*x*(1-x);	
	}

	return 0;
}

int main (int argc,char **argv)
{
	iRRAM_initialize(argc,argv);
	return iRRAM_exec(iRRAM_compute,argc,argv);
}
