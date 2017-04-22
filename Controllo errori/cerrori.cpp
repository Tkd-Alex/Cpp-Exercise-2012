#include <iostream>
using namespace std;
int main(){
//Dichiarazioni
int v[100],bin,r,uno=0,zero=0;
char car;
//Caratteri
cout<<"Inserisci un carattere: \n";
cin>>car;
bin=(int)car;
cout<<"Valore decimale del carattere: \n";
cout<<bin<<endl;


for(int i=6;i>-1;i--){
r=bin%2;
v[i]=r;
bin=bin/2;
}

cout<<"Valore binario del carattere: \n";
for(int i=0;i<7;i++){
cout<<v[i];}

for(int i=0;i<7;i++){
if(v[i]==0)
zero++;
else
uno++;
}

cout<<"\nZero trovati: \n"<<zero;
cout<<"\nUno trovati: \n"<<uno;

if(uno%2==0)
v[7]=0;
else
v[7]=1;

cout<<"\nNumero con bit d'errore: \n";
for(int i=0;i<8;i++){
cout<<v[i];}

cout<<endl;

system("pause");
}
