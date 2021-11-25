#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]){
	int n;
	cin >> n;
	cout << "nodos: " << n << endl;
	vector<vector<int>> ma = vector<vector<int>>(n);
	int m;
	cin >> m;
	int x,y;
	for(int i=0; i<m; i++){
		cin >> x >> y;
		x--;
		y--;
		ma[x].push_back(y);
		ma[y].push_back(x);
	}
	for(int i=0; i<n; i++){
		cout << i << ": ";
		for(int j=0; j<ma[i].size(); j++){
			cout << ma[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}