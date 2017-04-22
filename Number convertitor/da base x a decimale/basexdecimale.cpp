
#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int b1, b2, b3, b4, b5, b6, b7, b8, decimale;
    double base;
        cout<<"Inserisci la base del numero."<<endl;
        cin>> base;
        cout<<"Inserisci la prima cifra"<<endl;
        cin>>b1;
        cout<<"Inserisci la seconda cifra."<<endl;
        cin>>b2;
        cout<<"Inserisci la terza cifra."<<endl;
        cin>>b3;
        cout<<"Inserisci la quarta cifra."<<endl;
        cin>>b4;
        cout<<"Inserisci la quinta cifra."<<endl;
        cin>>b5;
        cout<<"Inserisci la sesta cifra."<<endl;
        cin>>b6;
        cout<<"Inserisci la settima cifra."<<endl;
        cin>>b7;
        cout<<"Inserisci l' ottava cifra."<<endl;
        cin>>b8;
        decimale=(b1*(pow (base, 7)))+(b2*(pow (base, 6)))+(b3*(pow (base, 5)))+(b4*(pow (base, 4)))+(b5*(pow (base, 3)))+(b6*(pow (base, 2)))+(b7*(pow (base, 1)))+(b8*(pow (base, 0)));
        cout<<"Il numero decimale " <<b1<<b2<<b3<<b4<<b5<<b6<<b7<<b8 <<" convertito in base "<<base<<" equivale a " <<decimale<<endl;
        system("pause");
    }    

