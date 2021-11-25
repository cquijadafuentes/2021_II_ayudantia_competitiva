#include <bits/stdc++.h>
using namespace std;
/*Funcion que me ayuda a calcular el factorial de num*/
double ncr(double num);
int main(){
     double cases;
     /*Leo la entrada mientras siga recibiendo datos y sea distinto de 0*/
     while(cin>>cases && cases != 0){
          /*Usare un vector y un stack, para armar los pares y verificar*/
          vector<int>v1;
          stack<int> s1;
          double cont = 0;
          double res;
          for(int i = 0; i < cases; ++i){
               int a;
               cin>>a;
               v1.push_back(a);
               s1.push(a);
          }
          /*Mientras el stack tenga elementos voy armando los pares
           *Ejemplo: s = 23456 v = 23456.
           *En este ejemplo armo primero los pares con 6
           *Despues elimino el 6 tanto del stack como del vector
           *Ya que ya arme todos los pares posibles con el 6
           *Mientras hago esto voy verificando que el GCD sea 1*/
          while(s1.size() != 0){
               for(int i = 0; i < v1.size(); ++i){
                    int a = s1.top(),b = v1[i], d;
                    if(a != b){
                         while(b!=0){
                              d = a%b;
                              a = b;
                              b = d;
                         }
                    }
                    if(a == 1){
                    	cont++;
                    	cout << s1.top() << " - " << v1[i] << endl;
					}
               }
               v1.pop_back();
               s1.pop();
          }
          if(cont>0){
               /*Aqui realizo la ecuacion para poder obtener el resultado.*/
               double total = ncr(cases)/(ncr(2)*ncr(cases-2));
               res = (cont/total);
               res = res/6;
               res = pow(res, -1.0);
               res = sqrt(res);
               /*En estas ultimas lineas le exijo a cout la precision.*/
               cout<<fixed;
               cout<<setprecision(6)<<res<<endl;
          }
          else cout<<"No estimate for this data set."<<endl;
     }
     return 0;
}
/*Esta funcion me retorna el factorial de cada numero*/
double ncr(double num){
     double a = 1;
     for(double i = 2; i <= num;++i){
          a = a*i;
     }
     return a;
};
