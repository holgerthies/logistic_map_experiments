// Use iRRAM to compute an exact orbit for the logistic map
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "iRRAM/lib.h"
#include "iRRAM/core.h"

using std::endl;
using std::vector;
using namespace iRRAM;


//template int iRRAM_exec<int, int> (int (*) (int), int);
int iRRAM_compute(const int& num_iter) {
	REAL a = 3.8;
	REAL x = 0.4;
	for(int i=0; i<=num_iter; i++) {
		rwrite(x,15);
		cout << endl;
		x = a*x*(1-x);	
	}

	return -ACTUAL_STACK.actual_prec;
}

int main (int argc,char **argv)
{
	std::ofstream fout("data_prec/data.out");
	vector<int> num_iters = {10,50,100,500,1000,5000,10000,50000};
	for(int i : num_iters){
		iRRAM_initialize(argc,argv);
		int prec = iRRAM_exec(iRRAM_compute,i);
		fout << i << " " << prec << endl;
	}
	return 0;
}
