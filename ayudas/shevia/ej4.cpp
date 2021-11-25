#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>

typedef long long int lli;
typedef unsigned short int usi;
typedef unsigned long long int ulli;

using namespace std;

bool comp (const ulli& a, const ulli& b)
{
    return  a < b;
}

int main(){
    ulli n;     //numero de elementos de un caso
    while(cin >> n){
        vector<usi> data;
        ulli suma1= 0, suma2= 0;    //suma 1 tendrá la suma de los elementos menores o iguales a algun candidato a "a"
                                    //suma 2 tendrá la suma de los elementos mayores que algun candidato a "a"
        for(ulli i=0; i<n; i++){
            usi aux;
            cin >> aux;
            data.push_back(aux);
            suma2+= aux;
        }
        sort(data.begin(), data.end(), &comp);

        ulli min= *data.begin(), max= *(data.end()-1);
        ulli contIn= 0;              //contador de los input que la suma sea minima

        map<ulli, ulli> *aFinal= new map<ulli, ulli>;   //guarda todos los "A" encontrados
        ulli difMin= ULLONG_MAX;

        auto iter_aux= data.begin();
        ulli cont= 0, size= data.size();                //"cont" contara los elementos leidos de "data"

        for(ulli a=min; a<=max; a++){
            ulli contA= 0;                              //"contA" contara las veces en las que aparece "a" en "data"
            while (*iter_aux == a){
                cont ++;
                contA ++;
                suma1+= *iter_aux;
                suma2-= *iter_aux;
                iter_aux++;
            }
            ulli dif= a*cont- suma1 + suma2 - (a*(size-cont));
            
            if(dif< difMin){
                difMin= dif;
                contIn= contA;
                aFinal= new map<ulli, ulli>;
                aFinal->insert(make_pair(a, 0));
            }
            else if(dif == difMin){
                contIn+= contA;
                aFinal->insert(make_pair(a, 0));
            }
        }

        cout << aFinal->begin()->first << " " << contIn << " " << aFinal->size() << endl;
    }
}