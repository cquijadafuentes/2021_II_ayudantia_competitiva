#include <iostream>
#include <ctime> 
#include <vector>
 
using namespace std;

void function1(int x);

int main(int argc, char const *argv[]){
	unsigned t0, t1;
	int rep = 10;
	if(argc > 1){
		rep = atoi(argv[1]);
	}


	t0=clock();
	
	function1(rep);
	
	t1 = clock();

	double time = (double(t1-t0)/CLOCKS_PER_SEC);
	time *= 1000;
	cout << "Execution Time: " << time << "[ms]";
	cout << " en " << rep << " inserciones." << endl;
	double prom = time / rep;
	cout << "Promedio: " << prom << "[ms]" << endl;
	return 0;
}


void function1(int x){
	vector<int> myvector;
	for(int i=0; i<x; i++){
		myvector.insert(myvector.begin(), i);
	}
}
