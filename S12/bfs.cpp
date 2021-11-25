#include <iostream>
#include <vector>
#include <queue>

using namespace std;

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

	cout << "BFS" << endl;
	vector<bool> marcado = vector<bool>(n, false);
	queue<int> qbfs;
	vector<int> cont = vector<int>(n, -1);
	qbfs.push(0);
	marcado[0] = true;
	cont[0] = 0;
	while(!qbfs.empty()){
		x = qbfs.front();
		qbfs.pop();
		cout << "visitando: " << x << endl;
		for(int i=0; i<la[x].size(); i++){
			y = la[x][i].first;
			if(!marcado[y]){
				qbfs.push(y);
				marcado[y] = true;
				cont[y] = cont[x] + 1;
			}
		}
	}

	for(int i=0; i<n; i++){
		cout << i << ": " << cont[i] << endl;
	}
	
	return 0;
}