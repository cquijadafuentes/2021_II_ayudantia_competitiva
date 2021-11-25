#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int n;
	cin >> n;
	cout << "nodos: " << n << endl;
	int ma[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			ma[i][j] = 0;
		}
	}
	int m;
	cin >> m;
	int x,y;
	for(int i=0; i<m; i++){
		cin >> x >> y;
		x--;
		y--;
		ma[x][y] = 1;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << ma[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}