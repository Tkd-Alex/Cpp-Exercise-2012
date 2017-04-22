#include <iostream>
using namespace std;
int main () {
    int b1, b2, b3, b4, b5, b6, b7, b8, base, numero, resto;
    cout<<"Inserisci il numero decinamale."<<endl;
    cin>>numero;
    cout<<"La base nella quale bisogna convertire il numero inserito prima."<<endl;
    cin>>base;
    resto=numero%base;
    b1 = resto;
    numero = numero/base;
    resto=numero%base;
    b2 = resto;
    numero = numero/base;
    resto=numero%base;
    b3 = resto;
    numero = numero/base;
    resto=numero%base;
    b4 = resto;
    numero = numero/base;
    resto=numero%base;
    b5 = resto;
    numero = numero/base;
    resto=numero%base;
    b6 = resto;
    numero = numero/base;
    resto=numero%base;
    b7 = resto;
    numero = numero/base;
    resto=numero%2;
    b8 = resto;
    numero = numero/base;
    cout<<"Il numero convertito in base "<<base <<" e' " <<b8<<b7<<b6<<b5<<b4<<b3<<b2<<b1<<endl;
    system("pause");
}    
    
    
    

