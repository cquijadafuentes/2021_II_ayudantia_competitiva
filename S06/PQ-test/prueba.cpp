#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

class especial{
public:
	int a;
	int b;
	especial(int aa, int bb){
		a = aa;
		b = bb;
	}
private:

};

int main(int argc, char const *argv[]){

	priority_queue<int, vector<int>, greater<int>> pq;
	int x;
	while(cin >> x){
		pq.push(x);
	}
	while(!pq.empty()){
		cout << pq.top() << "  -  ";
		cout << pq.front() << "  -  ";
		pq.pop();
	}
	cout << endl;
	return 0;
}