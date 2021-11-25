#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[]){
	stack<int> s0;
	int x;
	while(cin >> x){
		if(x != 0){
			s0.push(x);
		}else{
			if(!s0.empty()){
				s0.top() *= -1;
				cout << s0.top() << " - ";
				s0.pop();
			}
		}
	}
	cout << endl;
	cout << "Elementos restantes: " << s0.size() << endl;
	return 0;
}