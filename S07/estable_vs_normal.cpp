#include <iostream>
#include <algorithm>
#include <random>

using namespace std;

bool comp_doble_enteros(double x, double y){
	return (int)x < (int)y;
}

int main(int argc, char const *argv[]){
	default_random_engine generator;
	uniform_int_distribution<int> distribution(100,999);
	int n = 24;
	vector<double> vi(n);
	vector<double> vs(n);
	vector<int> vc(n);

	for(int i=0; i<n; i++){
		vi[i] = (distribution(generator)+0.0)/100;
		vs[i] = vi[i];
		vc[i] = (int) vi[i];
		cout << "  " << vi[i];
	}
	cout << endl;
	
	// Ordenamiento sin asegurar estabilidad
	sort(vi.begin(), vi.end(), comp_doble_enteros);

	for(int i=0; i<n; i++){
		cout << "  " << vi[i];
	}
	cout << endl;
	
	// Ordenamiento estable
	stable_sort(vs.begin(), vs.end(), comp_doble_enteros);

	for(int i=0; i<n; i++){
		cout << "  " << vs[i];
	}
	cout << endl;

	// Búsqueda binaria
	sort(vc.begin(), vc.end());
	for(int i=0; i<n; i++){
		cout << "  " << vc[i];
	}
	cout << endl;
	int x;
	cin >> x;
	cout << "Buscando: " << x << endl;
	if(binary_search(vc.begin(), vc.end(), x)){
		cout << "Encontrado" << endl;
	}else{
		cout << "No encontrado" << endl;
	}

	// Lowerbound Upperbound
	vector<int>::iterator lb = lower_bound(vc.begin(), vc.end(), x);
	vector<int>::iterator ub = upper_bound(vc.begin(), vc.end(), x);

	cout << "LowerBound: " << lb - vc.begin() << endl;
	cout << "UpperBound: " << ub - vc.begin() << endl;

	// Find
	vector<int>::iterator f = find(vc.begin(), vc.end(), x);
	cout << "Find: " << f-vc.begin() << endl;

	return 0;
}