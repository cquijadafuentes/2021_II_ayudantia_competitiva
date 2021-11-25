#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<pair<int,int>>> &la, vector<bool> &vi, int x);

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

	// dfs

	vector<bool> vi = vector<bool>(n, false);
	dfs(la, vi, 0);

	return 0;
}


void dfs(vector<vector<pair<int,int>>> &la, vector<bool> &vi, int x){
	if(vi[x]){
		cout << "ya fue visitado el nodo " << x << endl;
	}else{
		cout << "explorando el nodo " << x << endl;
		vi[x] = true;
		for(int i=0; i<la[x].size(); i++){
			dfs(la, vi, la[x][i].first);
		}
	}
	return;
}