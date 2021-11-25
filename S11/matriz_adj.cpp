#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int n, m;
	cin >> n >> m;
	int ma[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			ma[i][j] = 0;
		}
	}
	int x,y, z;
	for(int i=0; i<m; i++){
		cin >> x >> y >> z;
		x--;
		y--;
		ma[x][y] = z;
		ma[y][x] = z;
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << ma[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}