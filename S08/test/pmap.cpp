#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[]){
	map<int,int> mymap;
	int x;
	int max = 0;
	while(cin >> x){
		mymap[x]++;
		max = x > max ? x : max;
	}

	for(int i=0; i<=max; i++){
		cout << i << " : " << mymap[i] << " veces." << endl;
	}
	

	return 0;
}