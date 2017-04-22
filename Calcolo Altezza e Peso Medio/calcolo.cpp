#include <iostream>
using namespace std;
int main () {
    float a1, a2, a3, p1, p2, p3, am, pm;
    cout<<"Inserisci tre altezze differenti in centimetri."<<endl;
    cin>>a1;
    cin>>a2;
    cin>>a3;
    am=(a1+a2+a3)/3;
    cout<<"L'altezza media e' di "<<am <<" centimetri."<<endl;
    cout<<endl<<"Adesso inserisci tre pesi differenti in chili."<<endl;
    cin>>p1;
    cin>>p2;
    cin>>p3;
    pm=(p1+p2+p3)/3;
    cout<<"Il peso medio e' di "<<pm <<" chili."<<endl;
    system("pause");
}
    
