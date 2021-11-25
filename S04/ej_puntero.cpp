#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void duplica(vector<int> &a){
	for(int i=0; i<a.size(); i++){
		a[i] *= 2;
	}
}

void imprime(vector<int> a){
	cout << "Arreglo: ";
	for(int i=0; i<a.size(); i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(int argc, char const *argv[]){
	int n;
	cin >> n;

	int* arrrr = new int[n];

	vector<int> arr(n);


	for(int i=0; i<n; i++){
		arr[i] = n-i;
		arrrr[i] = arr[i];
	}
	imprime(arr);
	duplica(arr);
	imprime(arr);

	arr.push_back(50);
	arr.push_back(150);
	imprime(arr);

	sort(arr.begin(), arr.end());
	imprime(arr);

	sort(arrrr, arrrr+5);
	for(int i=0; i<n; i++){
		cout << " " << arrrr[i] ;
	}
	cout << endl;

	return 0;
}