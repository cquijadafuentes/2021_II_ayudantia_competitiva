#include <iostream>

using namespace std;

int main(){
	string aux, ttt;
	int casos;
	cin >> casos;
	for(int i=0; i<casos; i++){
		ttt = "";
		for(int j=0; j<3; j++){
			cin >> aux;
			ttt = ttt + aux;
		}
		cout << ttt << endl;

	}
	return 0;
}