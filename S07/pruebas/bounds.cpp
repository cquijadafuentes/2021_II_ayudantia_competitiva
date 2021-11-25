#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){
	cout << "Hola mundo!" << endl;
	int mydoubles[] = {20, 30, 30, 30, 30, 40, 50, 60, 60, 60, 80, 70, 90, 90, 90};
	vector<int> vd(mydoubles, mydoubles+15);
	for(int i=0; i<vd.size(); i++){
		cout << " " << vd[i];
	}
	cout << endl;

	stable_sort(vd.begin(), vd.end());
	for(int i=0; i<vd.size(); i++){
		cout << " " << vd[i];
	}
	cout << endl;


	vector<int>::iterator lower = lower_bound(vd.begin(), vd.end(), 30);
	vector<int>::iterator uper = upper_bound(vd.begin(), vd.end(), 30);
	cout << endl;

	return 0;
}