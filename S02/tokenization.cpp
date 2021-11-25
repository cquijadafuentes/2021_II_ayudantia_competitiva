#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]){
	stringstream ss("texto a tokenizar");
	string s, m;

	while(getline(ss, s, 't')){
		stringstream mm(s);
		while(getline(mm, m, 'x')){
			cout << m << endl;
		}
	}
	return 0;
}
