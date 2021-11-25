#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp_int(double x, double y){
	return int(x) < int(y);
}

int main(int argc, char const *argv[]){
	cout << "Hola mundo!" << endl;
	double mydoubles[] = {3.14, 1.41, 2.72, 4.67, 1.73, 1.32, 1.62, 2.58};
	vector<double> vd(mydoubles, mydoubles+8);
	vector<double> vd2(mydoubles, mydoubles+8);
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