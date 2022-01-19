#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool bipartite_check(vector<vector<int>> gr){
	cout << "Bipartite check" << endl;
	vector<short> color = vector<short>(gr.size(), 0);
	vector<bool> marcado = vector<bool>(gr.size(), false);
	queue<int> qbc;
	qbc.push(0);
	marcado[0] = true;
	color[0] = 0;
	int x, y;
	while(!qbc.empty()){
		x = qbc.front();
		qbc.pop();
		cout << "visitando: " << x << endl;
		for(int i=0; i<gr[x].size(); i++){
			y = gr[x][i];
			if(!marcado[y]){
				marcado[y] = true;
				color[y] = (color[x] == 0) ? 1 : 0;
				qbc.push(y);
			}else{
				if(color[y] == color[x]){
					return false;
				}
			}
		}
	}
	return true;
}


int main(int argc, char const *argv[]){
	int n, m;
	cin >> n >> m;
	vector<vector<int>> la = vector<vector<int>>(n);
	cout << n << " " << m << endl;;
	int x,y;
	for(int i=0; i<m; i++){
		cin >> x >> y;
		la[x].push_back(y);
		la[y].push_back(x);
	}

	for(int i=0; i<n; i++){
		cout << i << " : " ;
		for(int j=0; j<la[i].size(); j++){
			cout << la[i][j] << " ";
		}
		cout << endl;
	}

	if(bipartite_check(la)){
		cout << "El grafo es bipartito" << endl;
	}else{
		cout << "El grafo no es bipartito" << endl;
	}
	
	return 0;
}