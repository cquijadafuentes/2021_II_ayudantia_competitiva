#include <iostream>
#include <queue>

using namespace std;

class MiComparador{
public:
	bool operator() (pair<int,string> a, pair<int,string> b){
		return a.second < b.second;
	}
};



int main(int argc, char const *argv[]){
	priority_queue<pair<pair<int,int>,int>> pq;
	pq.push(make_pair(make_pair(3,1),1));
	pq.push(make_pair(make_pair(2,2),2));
	pq.push(make_pair(make_pair(1,3),3));

	cout << pq.top().second << endl;
	pq.pop();

	pq.push(make_pair(make_pair(6,4),4));
	pq.push(make_pair(make_pair(5,5),5));
	pq.push(make_pair(make_pair(4,6),6));

	cout << pq.top().second << endl;
	pq.pop();

	pq.push(make_pair(make_pair(9,7),7));
	pq.push(make_pair(make_pair(8,8),8));
	pq.push(make_pair(make_pair(7,9),9));

	cout << pq.top().second << endl;
	pq.pop();


	return 0;
}