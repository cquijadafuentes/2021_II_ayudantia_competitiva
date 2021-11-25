#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<pair<int,int>>> &la, vector<bool> &vi, int x, vector<int> &c);

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

	cout << "DFS" << endl;
	vector<bool> vi = vector<bool>(n, false);
	vector<int> cont = vector<int>(n, -1);
	cont[0] = 0;
	dfs(la, vi, 0, cont);
	for(int i=0; i<n; i++){
		cout << i << ": " << cont[i] << endl;
	}
	return 0;
}


void dfs(vector<vector<pair<int,int>>> &la, vector<bool> &vi, int x, vector<int> &c){
	cout << " " << x << endl;
	vi[x] = true;
	int y;
	for(int i=0; i<la[x].size(); i++){
		y = la[x][i].first;
		if(!vi[y]){
			c[y] = c[x]+1;
			dfs(la, vi, y, c);
		}
	}
	return;
}