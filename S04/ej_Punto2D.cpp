#include <iostream>

using namespace std;

class Punto2D{
public:
	int x;
	int y;
	Punto2D(){
		x = 1;
		y = 1;
	}
	Punto2D(int xo, int yo){
		x = xo;
		y = yo;
	}
	void printP2D(){
		cout << "(" << x << "," << y << ")" << endl;
	}
private:
};

void desplazar(int dx, int dy, Punto2D &p){
	cout << "desplanzado ..." << endl;
	p.x += dx;
	p.y += dy;
	p.printP2D();
	cout << "mem p: " << &p << endl;
}

int main(int argc, char const *argv[]){
	int x, y;
	cin >> x >> y;
	Punto2D p1(x, y);
	cout << "El punto es: ";
	p1.printP2D();

	cout << "mem p1: " << &p1 << endl;

	desplazar(2,2, p1);
	cout << "El punto es: ";
	p1.printP2D();

	return 0;
}