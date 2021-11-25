#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){
	int myints[]= {10,40,50,20,30};
	set<int> c1(myints, myints+5);
	auto ret = c1.insert(35);
	if(ret.second){
		cout << "se ha insertado con éxito." << endl;
	}else{
		cout << "NO se ha insertado con éxito." << endl;
	}
	cout << "datos c1: " << endl;
	for(set<int>::iterator it=c1.begin(); it!=c1.end(); it++){
		cout << *it << endl;
	}
	cout << "cantidad de datos: " << c1.size() << endl;
	int b = 40;
	cout << "búsqueda: " << b << endl;
	if(c1.find(b) != c1.end()){
		cout << "se ha encontrado con éxito." << endl;
	}else{
		cout << "NO se ha encontrado" << endl;
	}

	int myints2[]= {10,40,55,25,100};
	set<int> c2(myints2, myints2+5);
	cout << "datos c2: " << endl;
	for(set<int>::iterator it=c2.begin(); it!=c2.end(); it++){
		cout << *it << endl;
	}
	cout << "cantidad de datos: " << c2.size() << endl;

	vector<int> res(c1.size() + c2.size());
	vector<int>::iterator itr = set_symmetric_difference(c1.begin(), c1.end(), c2.begin(), c2.end(), res.begin());
	res.resize(itr - res.begin());
	cout << "Unión de c1 y c2:" << endl;
	for(int i=0; i<res.size(); i++){
		cout << res[i] << endl;
	}
	cout << res.size() << " elementos" << endl;

	set<int>::iterator itc1 = c1.upper_bound(25);
	set<int>::iterator itc2 = c2.upper_bound(25);

	cout << "c1upper: " << *itc1 << endl;
	cout << "c2upper: " << *itc2 << endl;

	vector<int> res2(c1.size() + c2.size());
	vector<int>::iterator itr2 = set_symmetric_difference(itc1, c1.end(), itc2, c2.end(), res2.begin());
	res2.resize(itr2 - res2.begin());
	cout << "Unión de c1 y c2:" << endl;
	for(int i=0; i<res2.size(); i++){
		cout << res2[i] << endl;
	}
	cout << res2.size() << " elementos" << endl;


	return 0;
}