#include <iostream>       // std::cout
#include <queue>          // std::priority_queue

using namespace std;

class MiPar{
	public:
	int a;
	int b;
	MiPar::MiPar(int x, int y){
		a=x;
		b=y;
	}
	bool operator(){
		return a > b;
	}

};

int main(int argc, char const *argv[]){
	cout << "Hola mundo! " << endl;
	priority_queue<MiPar>> pq;
	pq.push(MiPar(1,"Uno"));
	pq.push(MiPar(2,"Dos"));
	pq.push(MiPar(3,"Tres"));

	cout << pq.top().second << endl;
	pq.pop();

	pq.push(MiPar(9,"Nueve"));
	pq.push(MiPar(4,"Cuatro"));
	pq.push(MiPar(5,"Cinco"));

	cout << pq.top().second << endl;
	pq.pop();

	pq.push(MiPar(6,"Seis"));
	pq.push(MiPar(7,"Siete"));
	pq.push(MiPar(8,"Ocho"));

	cout << pq.top().second << endl;
	pq.pop();

	return 0;
}