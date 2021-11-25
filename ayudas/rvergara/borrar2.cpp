#include <iostream>

using namespace std;

int main(){
	int auxA, auxB;
	for(int i=0; i<488; i++){
		cin >> auxA;
		for(int j=0; j<auxA; j++){
			cin >> auxB;
		}
	}
	cin >> auxA;
	cout << auxA << endl;
	for(int j=0; j<auxA; j++){
		cin >> auxB;
		cout << auxB << endl;
	}
	return 0;
}
