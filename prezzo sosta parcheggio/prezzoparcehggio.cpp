#include <iostream>
using namespace std;
int main () {
    float t,prezzo;
    cout<<"Inserisci le ore nella quale l'utente deve parcheggiare"<<endl;
    cin>> t;
    prezzo=1.50+0.70*(t-1);
    cout<<"L'utente per sostare " <<t<< " ore deve pagare "<<prezzo<<" euro."<<endl;
    system ("pause");
}    
