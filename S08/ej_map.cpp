#include <iostream>
#include <unordered_map>

using namespace std;

int main(int argc, char const *argv[]){
	int x;
	int max = 0;
	unordered_map<int,int> mymap;
	while(cin >> x){
		//mymap.insert(pair<int,int>(x,y));
		mymap[x]++;

		max = (x > max) ? x : max;
		/*
		if(x > max){
			max = x;
		}else{
			max = max;
		}
		*/
	}

	for(int i=0; i<= max; i++){
		if(mymap[i] > 0){
			cout << i << " : " << mymap[i] << endl;
		}
	}

	int bc = mymap.bucket_count();

	for(int i=0; i<bc; i++){
		cout << "bucket[" << i << "]: ";
		for(auto it = mymap.begin(i); it != mymap.end(i); it++){
			cout << (*it).first << " : " << (*it).second << " - ";
		}
		cout << endl;
	}



/*
	mymap.erase(25);

	for(int i=0; i<= max; i++){
		if(mymap[i] > 0){
			cout << i << " : " << mymap[i] << endl;
		}
	}

	unordered_map<int,int>::iterator itmm = mymap.find(23);
	mymap.erase(itmm);

	for(int i=0; i<= max; i++){
		if(mymap[i] > 0){
			cout << i << " : " << mymap[i] << endl;
		}
	}
*/

	return 0;
}