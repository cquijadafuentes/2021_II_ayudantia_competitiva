#include <iostream>       // std::cout
#include <queue>          // std::priority_queue

using namespace std;

class Compara{
	public:
	bool operator()(pair<int,string> a, pair<int,string> b){
		return a.first > b.first;
	}

};

int main(int argc, char const *argv[]){
	cout << "Hola mundo! " << endl;
	priority_queue<pair<int,string>, vector<pair<int,string>>, Compara> pq;
	pq.push(make_pair(1,"Uno"));
	pq.push(make_pair(2,"Dos"));
	pq.push(make_pair(3,"Tres"));

	cout << pq.top().second << endl;
	pq.pop();

	pq.push(make_pair(9,"Nueve"));
	pq.push(make_pair(4,"Cuatro"));
	pq.push(make_pair(5,"Cinco"));

	cout << pq.top().second << endl;
	pq.pop();

	pq.push(make_pair(6,"Seis"));
	pq.push(make_pair(7,"Siete"));
	pq.push(make_pair(8,"Ocho"));

	cout << pq.top().second << endl;
	pq.pop();

	return 0;
}