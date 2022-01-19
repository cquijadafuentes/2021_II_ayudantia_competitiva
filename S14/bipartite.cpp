#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool bipartite_check(vector<vector<int>> gr){
	vector<bool> visitado = vector<bool>(gr.size(), false);
	vector<short> color = vector<short>(gr.size(), 0); // colores 1 y 2 - 0 no coloreado
	queue<int> qbc;
	qbc.push(0);
	visitado[0] = true;
	color[0] = 1;
	int x, y;
	while(!qbc.empty()){
		x = qbc.front();
		qbc.pop();
		for(int i=0; i<gr[x].size(); i++){
			y = gr[x][i];
			if(!visitado[y]){
				// encolar y asignar color
				qbc.push(y);
				visitado[y] = true;
				color[y] = (color[x] == 1) ? 2 : 1;
			}else{
				// verificar color
				if(color[x] == color[y]){
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
	int x,y;
	for(int i=0; i<m; i++){
		cin >> x >> y;
		la[x].push_back(y);
		la[y].push_back(x);
	}

	for(int i=0; i<n; i++){
		cout << i << " : ";
		for(int j=0; j<la[i].size(); j++){
			cout << la[i][j]  << "  ";
		}
		cout << endl;
	}

	if(bipartite_check(la)){
		cout << "El grafo SI es bipartito" << endl;
	}else{
		cout << "El grafo NO es bipartito" << endl;
	}

	return 0;
}