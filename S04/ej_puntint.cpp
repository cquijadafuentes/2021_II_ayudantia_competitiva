#include <iostream>

using namespace std;

void mostrar(int* x){
	cout << "mostrando x: " << *x << endl;
	*x = 50;
}


int main(int argc, char const *argv[]){
	int x = 10;
	int* y = &x;
	cout << "x: " << x << endl;
	cout << "y: " << *y << endl;
	*y = 20;
	cout << "x: " << x << endl;
	cout << "y: " << *y << endl;

	mostrar(y);

	cout << "x: " << x << endl;
	cout << "y: " << *y << endl;
	return 0;
}