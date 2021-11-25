#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int casos;
	cin >> casos;
	for(int i=0; i<casos; i++){
		if(i>0){
			cout << endl;
		}
		int cantPtos;
		cin >> cantPtos;
		for(int j=0; j<cantPtos; j++){
			int x, y;
			cin >> x >> y;
			cout << "(" << x << "," << y << ")" << endl;
		}
	}
	return 0;
}