#include <iostream>
#include <vector>

using namespace std;

int consulta_la(vector<vector<pair<int,int>>> &la, int x, int y){
	for(int i=0; i<la[x].size(); i++){
		if(la[x][i].first == y){
			return la[x][i].second;
		}
	}
	return -1;
}

int main(int argc, char const *argv[]){
	int n, m;
	cin >> n >> m;
	vector<vector<pair<int,int>>> la = vector<vector<pair<int,int>>>(n);
	cout << n << " " << m << endl;;
	int x,y,z;
	for(int i=0; i<m; i++){
		cin >> x >> y >> z;
		x--;
		y--;
		la[x].push_back(make_pair(y,z));
		la[y].push_back(make_pair(x,z));
	}

	for(int i=0; i<n; i++){
		cout << i << " : " ;
		for(int j=0; j<la[i].size(); j++){
			cout << la[i][j].first << " (" << la[i][j].second << ") ";
		}
		cout << endl;
	}

	x = 3;
	y = 2;

	int peso = consulta_la(la, x, y);
	if(peso >= 0){
		cout << "SI: " << peso << endl;
	}else{
		cout << "NO" << endl;
	}

	return 0;
}