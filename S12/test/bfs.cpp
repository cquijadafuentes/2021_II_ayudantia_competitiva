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

	// BFS

	vector<bool> marcado = vector<bool>(n, false);
	queue<int> qbfs;
	qbfs.push(0);
	marcado[0] = true;


	while(!qbfs.empty()){
		x = qbfs.front();
		qbfs.pop();
		cout << "visitando nodo " << x << endl;
		for(int i=0; i<la[x].size(); i++){
			y = la[x][i].first;
			if(!marcado[y]){
				qbfs.push(y);
				marcado[y] = true;
			}
		}
	}

	return 0;
}