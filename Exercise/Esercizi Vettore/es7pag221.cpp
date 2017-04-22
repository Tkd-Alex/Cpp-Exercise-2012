#include <iostream>
using namespace std;
int main (){
int v1[100],v2[100],max,temp;
cout<<"Inserisci quanti valori vuoi inserire all'interno del vettore.\n";    
cin>>max;
for(int i=0;i<max;i++){
cout<<"Inserisci il "<<i+1<<"o valore.\n";
cin>>v1[i];}
cout<<"Stampe del primo vettore.\n";
for(int i=0;i<max;i++){
cout<<v1[i]<<" ";}
cout<<"\nStampa del secondo vettore (Invertito simmetricamente).\n";
for(int i=0;i<max;i++){       
v2[i]=v1[max-1-i];}
for(int i=0;i<max;i++){
cout<<v2[i]<<" ";}
cout<<endl;        
system("pause");}
