#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

int main(int argc, char const *argv[]){
//	priority_queue<int> pq0;	// maxheap
	priority_queue<int, vector<int>, greater<int>> pq0;		// minheap
	int x;
	while(cin >> x){
		if(x != 0){
			pq0.push(x);
		}else{
			if(!pq0.empty()){
				cout << pq0.top() << " - ";
				pq0.pop();
			}
		}
	}
	cout << endl;
	cout << "Elementos restantes: " << pq0.size() << endl;
	return 0;
}