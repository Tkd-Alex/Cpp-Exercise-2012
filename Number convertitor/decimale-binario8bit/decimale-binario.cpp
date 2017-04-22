#include <iostream>
using namespace std;
int main () {
    int b1, b2, b3, b4, b5, b6, b7, b8, numero, resto;
    cout<<"Inserisci il numero decinamale compreso tra 0 e 255 da convertire in binario."<<endl;
    cin>>numero;
    resto=numero%2;
    b1 = resto;
    numero = numero/2;
    resto=numero%2;
    b2 = resto;
    numero = numero/2;
    resto=numero%2;
    b3 = resto;
    numero = numero/2;
    resto=numero%2;
    b4 = resto;
    numero = numero/2;
    resto=numero%2;
    b5 = resto;
    numero = numero/2;
    resto=numero%2;
    b6 = resto;
    numero = numero/2;
    resto=numero%2;
    b7 = resto;
    numero = numero/2;
    resto=numero%2;
    b8 = resto;
    numero = numero/2;
    cout<<"Il numero in codice binario e' " <<b8<<b7<<b6<<b5<<b4<<b3<<b2<<b1<<endl;
    system("pause");
}    
    
    
    
