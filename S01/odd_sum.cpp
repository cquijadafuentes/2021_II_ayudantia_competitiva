#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int casos;
	cin >> casos;

	for (int i = 1; i <= casos; i++){
		int a,b;
		cin >> a >> b;
		int sum = 0;
		for(int j=a; j<=b; j++){
			if(j%2 == 1){
				sum += j
			}
		}
		cout << "Case " << i << ": " << sum << endl;
	}
	return 0;
}