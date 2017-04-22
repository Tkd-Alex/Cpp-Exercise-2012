#include <iostream>
using namespace std;
int main (){
    int i, v, m, i2;
    cout<<"Inserisci il numero di macchine che hanno attraversato la strada - While\n";
    cin>>m;
    i=0;
    i2=0;
    while(i<m){
    i++;
    cout<<"Inserisci la velocita' della "<<i<< "a auto\n";
    cin>>v;
    if(v>100)
    i2++;}
    cout<<i2<<" auto hanno superato il limite di 100km/h\n";
    
    //dowhile
    cout<<"\nInserisci il numero di macchine che hanno attraversato la strada - Do-While\n";
    cin>>m;
    i=0;
    i2=0;
    do{i++;
    cout<<"Inserisci la velocita' della "<<i<< "a auto\n";
    cin>>v;
    if(v>100)
    i2++;
     }while(i<m);
     cout<<i2<<" auto hanno superato il limite di 100km/h\n";
     system("pause");}
        
