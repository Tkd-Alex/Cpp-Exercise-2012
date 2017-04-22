#include <iostream>
using namespace std;
int main () {
    float s, p;
    cout<<"Inserire il proprio saldo\n";
    cin>>s;
    cout<<"Inserite quanto si desidera prelevare\n";
    cin>>p;
    if(p>700)
    cout<<"Non e' possibile prelevare piu' di 700 euro.\n";
    else{
    if(p>s)
    cout<<"Non e' possibilie portare il proprio saldo in negativo.\n";
    else{
    s-=p;
    cout<<"Il suo attuale saldo e' di "<<s<<endl;}}
    system("pause");}
    
