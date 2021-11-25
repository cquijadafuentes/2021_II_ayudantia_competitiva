#include <cstring>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	char ss[] = "Este_es_el-texto-a_tokenizar";

	char* word = strtok(ss, " ");

	while(word != NULL){
		cout << word << endl;
		word = strtok(NULL, " ");
	}

	return 0;
}