#include <iostream>
using namespace std;
int main () {
    //Dichiarazione variabili
    float prezzointero, sconto, iva, prezzofin;
    cout <<"Inserire il prezzo intero del prodotto.\n !INSERISCI IL PREZZO IN CIFRE SENZA IL SIMBOLO EURO.!"<<endl;
    //Input 
    cin>> prezzointero;
    //Elaborazione dati 
    iva = prezzointero + (prezzointero * 21/100);
    cout<<"Inserire la percentuale di sconto da applicare al prodotto. \n !INSERISCI LA PERCENTUALE IN CIFRE SENZA IL SIMBOLO PERCENTUALE.!"<<endl;
    //Input
    cin>> sconto;
    //Elaborazione dati 
    prezzofin = iva - (iva * sconto /100);
    //Output
    cout<<"Il prezzo e' di euro "<<iva<<" compreso di iva. \nIl prezzo scontato e' di euro "<<prezzofin<<endl;
    system("pause");
}        
 
