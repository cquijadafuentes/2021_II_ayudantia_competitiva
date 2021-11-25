#include <iostream>
#include <stack>

using namespace std;

bool abre(char x){
	return (x=='(' || x=='[' || x=='{');
}

bool cierra(char x){
	return (x==')' || x==']' || x=='}');	
}

bool pares(char x, char y){
	if(x=='(' && y==')') return true;
	if(x=='[' && y==']') return true;
	if(x=='{' && y=='}') return true;
	return false;
}

int main(int argc, char const *argv[]){
	stack<char> q;
	char x;
	while(cin >> x){
		if(abre(x)){
			q.push(x);
		}else if(cierra(x)){
			if(!pares(q.top(), x)){
				cout << "no" << endl;
				return 0;
			}
			q.pop();
		}
	}
	if(q.empty()){
		cout << "si" << endl;
	}else{
		cout << "no" << endl;
	}
	return 0;
}