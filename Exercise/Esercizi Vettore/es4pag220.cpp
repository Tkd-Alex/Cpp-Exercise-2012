#include <iostream>
using namespace std;
int main () {
int vet[100],valore,max,temp;
cout<<"Quanti valori vuoi inserire all'interno del vettore?\n";
cin>>max;
for(int i=0;i<max;i++){
cout<<"Inserisci il "<<i+1<<"o valore.\n";
cin>>vet[i];}
for(int i=0;i<max;i++){
for(int j=i+1;j<max;j++){
if(vet[i]>vet[j]){
temp=vet[i];
vet[i]=vet[j];
vet[j]=temp;}}}
cout<<"Il vettore e' stato ordinato in ordine decrescente.\n";
for(int i=0;i<max;i++){
cout<<vet[i]<<" ";}
cout<<"\nInserisci il valore di confronto.\n";
cin>>valore;
for(int i=0;i<max;i++){
if(vet[i]>valore){
cout<<"Il valore "<<vet[i]<<" con indice "<<i<<" e' maggiore di "<<valore<<endl;
}}
system("pause");
}
