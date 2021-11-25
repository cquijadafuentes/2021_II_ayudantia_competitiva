#include <iostream>
#include <stack>

using namespace std;

bool sonpares(char x, char y){
	// Indica si el char y es un paréntesis que se cierra con char x
	if(x=='(' && y==')') return true;
	if(x=='[' && y==']') return true;
	if(x=='{' && y=='}') return true;
	return false;
}

int main(int argc, char const *argv[]){
	char cc;
	stack<char> sc;
	while(cin >> cc){
		if(cc == '(' || cc == '{' || cc=='['){
			sc.push(cc);
		}else if(cc == ')' || cc == '}' || cc==']'){
			if(!sc.empty() && sonpares(sc.top(), cc)){
				sc.pop();
			}else{
				cout << "no" << endl;
				return 0;
			}
		}
	}
	if(sc.size() == 0){
		cout << "si" << endl;
	}else{
		cout << "no" << endl;
	}
	return 0;
}