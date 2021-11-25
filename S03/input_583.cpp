#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]){
	string linea1, linea2;
	while(getline(cin, linea1)){
		getline(cin, linea2);
		cout << " -- " << endl;
		// DOS LINEAS SON 2 CASO DE PRUEBA
		// Extrayendo factores
		stringstream s1(linea1);
		int cont_l1 = 0;
		int aux;
		while(s1 >> aux){
			cont_l1++;
		}
		stringstream s1b(linea1);
		cout << "Factores (" << cont_l1 << "): ";
		for(int i=0; i<cont_l1; i++){
			s1b >> aux;
			cout << aux << " - " ;
		}
		cout << endl;

		// Extrayendo valores
		int cont_l2 = 0;
		stringstream s2a(linea2);
		while(s2a >> aux){
			cont_l2++;
		}
		stringstream s2b(linea2);
		cout << "Valores (" << cont_l2 << "): ";
		for (int i = 0; i < cont_l2; i++){
			s2b >> aux;
			cout << aux << " - ";
		}
		cout << endl;
	}
	return 0;
}