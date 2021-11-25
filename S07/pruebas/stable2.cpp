#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp_int(double x, double y){
	return int(x) < int(y);
}

int main(int argc, char const *argv[]){
	cout << "Hola mundo! stable2" << endl;
	double mydoubles[] = {1.15, 1.65, 1.98, 1.45, 1.18, 1.32, 1.16, 1.18, 1.16, 1.32, 1.53, 1.289, 1.06, 1.35, 1.26, 1.28, 1.31, 1.34, 1.28, 1.57, 1.59, 1.54, 1.56, 1.51, 1.56, 2.56, 2.51, 2.56, 2.54, 2.59, 2.57, 2.28, 2.34, 2.31, 2.28, 2.26, 2.35, 2.06, 2.289, 2.53, 2.32, 2.16, 2.18, 2.16, 2.32, 2.18, 2.45, 2.98, 2.65, 2.15};
	vector<double> vd(mydoubles, mydoubles+50);
	vector<double> vd2(mydoubles, mydoubles+50);
	for(int i=0; i<vd.size(); i++){
		cout << " " << vd[i];
	}
	cout << endl;

	stable_sort(vd.begin(), vd.end(), comp_int);
	stable_sort(vd2.begin(), vd2.end(), comp_int);
	for(int i=0; i<vd.size(); i++){
		cout << " " << vd[i];
	}
	cout << endl;


	for(int i=0; i<vd2.size(); i++){
		cout << " " << vd2[i];
	}
	cout << endl;

	return 0;
}