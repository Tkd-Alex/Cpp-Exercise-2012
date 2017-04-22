#include <iostream>
using namespace std;
int main () {
    float a,b,c,d;
    cout<<"Inserisci tre valore per lo scambio da destra."<<endl;
    cout<<"Inserisci il valore da assegnare ad A."<<endl;
    cin>>a;
    cout<<"Inserisci il valore da assegnare a B."<<endl;
    cin>>b;
    cout<<"Inserisci il valore da assegnare a C."<<endl;
    cin>>c;
    cout<<"Hai inserito la sequenza " <<a<<b<<c<<endl;
    d=c;
    c=b;
    b=a;
    a=d;
    cout<<"La sequenza scambiata a destra equivale a " <<a<<b<<c<<endl;
    system("pause");
}    
