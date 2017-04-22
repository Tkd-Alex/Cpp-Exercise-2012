#include <iostream>
using namespace std;
int main () {
int vet[100],valore,max;
cout<<"Quanti valori vuoi inserire all'interno del vettore?\n";
cin>>max;
for(int i=0;i<max;i++){
cout<<"Inserisci il "<<i+1<<"o valore.\n";
cin>>vet[i];}
cout<<"Inserisci il valore di confronto.\n";
cin>>valore;
for(int i=0;i<max;i++){
if(vet[i]>valore){
cout<<"Il valore "<<vet[i]<<" con indice "<<i<<" e' maggiore di "<<valore<<endl;
}}
system("pause");
}
