#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char const *argv[]){
	queue<int> q0;
	int x;
	while(cin >> x){
		if(x != 0){
			q0.push(x);
		}else{
			if(!q0.empty()){
				q0.front() *= -1;
				cout << q0.front() << " - ";
				q0.pop();
			}
		}
	}
	cout << endl;
	cout << "Elementos restantes: " << q0.size() << endl;
	return 0;
}