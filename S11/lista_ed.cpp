#include <iostream>
#include <vector>

class Triple{
public:
	int x, y, p;
	Triple(int a, int b, int c){
		x = a;
		y = b;
		p = c;
	}
};

using namespace std;

int consulta_le(vector<Triple> &le, int x, int y){
	for(int i=0; i<le.size(); i++){
		if((le[i].x == x && le[i].y == y) || (le[i].x == y && le[i].y == x)){
			return le[i].p;
		}
	}
	return -1;
}

int main(int argc, char const *argv[]){
	int n, m;
	cin >> n >> m;
	vector<Triple> le;
	cout << n << " " << m << endl;;
	int x,y,z;
	for(int i=0; i<m; i++){
		cin >> x >> y >> z;
		x--;
		y--;
		le.push_back(Triple(x,y,z));
	}

	for(int j=0; j<le.size(); j++){
		cout << le[j].x << " - " << le[j].y << " : " << le[j].p << endl;
	}

	x = 3;
	y = 2;

	int peso = consulta_le(le, x, y);
	if(peso >= 0){
		cout << "SI: " << peso << endl;
	}else{
		cout << "NO" << endl;
	}

	return 0;
}