#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int countcc(vector<vector<int>> gr){
	vector<bool> visitado = vector<bool>(gr.size(), false);
	queue<int> qbc;
	int nodos_vis = 0;
	int cc = 0;
	do{
		cc++;	// Cantidad de componentes conexas
		// Encontrar el primer nodo sin visita
		for(int i=0; i<gr.size(); i++){
			if(!visitado[i]){
				qbc.push(i);
				visitado[i] = true;
				nodos_vis++;
				break;
			}
		}
		int x,y;
		// Recorrido en anchura desde el nodo encolado (línea 17)
		while(!qbc.empty()){
			x = qbc.front();
			qbc.pop();
			for(int i=0; i<gr[x].size(); i++){
				y = gr[x][i];
				if(!visitado[y]){
					qbc.push(y);
					visitado[y] = true;
					nodos_vis++;
				}
			}
		}
	}while(nodos_vis < gr.size());
	return cc;
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

	int cc = countcc(la);

	cout << "Existen " << cc << endl;

	return 0;
}