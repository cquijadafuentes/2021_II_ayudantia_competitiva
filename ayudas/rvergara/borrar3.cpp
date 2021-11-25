#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
	int cant, gcdaux;
	cin >> cant;
	int* nums = new int[cant];
	int contador = 0;
	for(int i=0; i<cant; i++){
		cin >> nums[i];
		for(int j=0; j<i; j++){
			gcdaux = __gcd(nums[i], nums[j]);
			
			if(gcdaux == 1){
				cout << "GCD(" << nums[i] << "," << nums[j] << ") = " << gcdaux << endl;
				contador++;
			}
		}
	}
	
	int totalPares = (cant*cant - cant)/2;
	double picuadrado = ((totalPares * 6) + 0.0) / contador;
	double mypi = sqrt((double)picuadrado);
	cout << "Pares totales: " << totalPares << endl;
	cout << "Pares contados: " << contador << endl;
	cout << "Pi = " << mypi << endl;
	return 0;
}
