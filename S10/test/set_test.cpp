#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){
	cout << "hola mundo" << endl;
	int enteros[] = {2, 8, 10, 4, 6};
	set<int> conjunto(enteros, enteros+5);

	cout << "conjunto 1" << endl;
	for(set<int>::iterator it = conjunto.begin(); it != conjunto.end(); it++){
		cout << *it << endl;
	}

	int enteros2[] = {3, 12, 5, 4, 2};
	set<int> conjunto2(enteros2, enteros2+5);

	cout << "conjunto 2" << endl;
	for(set<int>::iterator it = conjunto2.begin(); it != conjunto2.end(); it++){
		cout << *it << endl;
	}

	vector<int> resultado(conjunto.size() + conjunto2.size());
	vector<int>::iterator itv;

	itv = set_symmetric_difference(conjunto.begin(), conjunto.end(), conjunto2.begin(), conjunto2.end(), resultado.begin());
	resultado.resize(itv - resultado.begin());

	cout << "resultado operacion" << endl;
	for(int i=0; i<resultado.size(); i++){
		cout << resultado[i] << endl;
	}

	cout << "búsquedas:" << endl;
	for(int i=0; i<10; i++){
		cout << i << ": ";
		if(conjunto.find(i) == conjunto.end()){
			cout << "no encontrado." << endl;
		}else{			
			cout << "si encontrado." << endl;
		}
	}


	return 0;
}
